TF_DIR := terraform
ANSIBLE_DIR := ansible

BLUE := \033[0;34m
NC := \033[0m

.DEFAULT_GOAL := help

.PHONY: help up down terraform-init terraform-apply create-inventory wait-for-instance run-ansible

help:
	@echo "Available targets:"
	@echo "${BLUE}make up${NC}    - Provision and deploy the infrastructure"
	@echo "${BLUE}make down${NC}  - Destroy the infrastructure"
	@echo "${BLUE}make help${NC}  - Show this help message"

up: terraform-init terraform-apply create-inventory wait-for-instance run-ansible

down:
	@echo "Destroying infrastructure..."
	terraform -chdir=$(TF_DIR) destroy -auto-approve
	@echo "Resources Destroyed!"

terraform-init:
	@echo "Initializing Terraform..."
	terraform -chdir=$(TF_DIR) init

terraform-apply:
	@echo "Applying Terraform configuration..."
	@$(eval TEMP_IP=$(shell terraform -chdir=$(TF_DIR) apply -auto-approve | grep wordpress_ip | awk '{print $3}' | tr -d '"' | sed -n '2p' | cut -d'=' -f2 | tr -d ' "'))
	@echo "TEMP_IP: $(TEMP_IP)"
	@$(eval WORDPRESS_IP=$(shell if [ -z "$(TEMP_IP)" ]; then terraform -chdir=$(TF_DIR) apply -auto-approve | grep wordpress_ip | cut -d'=' -f2 | tr -d ' "'; else echo "$(TEMP_IP)"; fi))
	@echo "WordPress Server IP: $(WORDPRESS_IP)"

create-inventory:
	@echo "Creating Ansible inventory..."
	@if [ -f $(ANSIBLE_DIR)/inventory.ini ]; then rm -rf $(ANSIBLE_DIR)/inventory.ini; fi
	@echo "[wordpress]" > $(ANSIBLE_DIR)/inventory.ini
	@echo "$(WORDPRESS_IP) ansible_ssh_user=ubuntu ansible_ssh_private_key_file=~/.ssh/id_rsa" >> $(ANSIBLE_DIR)/inventory.ini

wait-for-instance:
	@echo "Fetching EC2 Instance ID..."
	$(eval INSTANCE_ID=$(shell aws ec2 describe-instances \
		--query 'Reservations[].Instances[?PublicIpAddress==`$(WORDPRESS_IP)`].InstanceId' \
		--region us-east-1 --output text))
	@echo "Instance ID: $(INSTANCE_ID)"
	@echo "Waiting for instance to be fully initialized..."
	@/bin/sh -c 'while true; do \
		status=$$(aws ec2 describe-instance-status --instance-ids $(INSTANCE_ID) --region us-east-1 --query "InstanceStatuses[0].InstanceStatus.Status" --output text); \
		if [ "$$status" = "ok" ]; then \
			break; \
		fi; \
		echo "Still initializing..."; \
		sleep 5; \
	done'
	@echo "EC2 instance is ready"

run-ansible:
	@echo "Running Ansible playbook..."
	@if [ -f .env ]; then \
		cd $(ANSIBLE_DIR) && ansible-playbook -i inventory.ini wordpress-playbook.yml --extra-vars "duckdns_domain=$$(grep DUCKDNS_DOMAIN ../.env | cut -d '=' -f2) duckdns_token=$$(grep DUCKDNS_TOKEN ../.env | cut -d '=' -f2)"; \
	else \
		echo "Error: .env file is required"; \
		exit 1; \
	fi

re: down-up

down-up:
	make down
	make up