# Cloud1: Automated WordPress Deployment on AWS

[![Build Status](https://img.shields.io/badge/build-passing-brightgreen)](https://github.com/makbulut1/cloud1)
[![Version](https://img.shields.io/badge/version-1.0.0-blue)](https://github.com/makbulut1/cloud1)
[![License](https://img.shields.io/badge/license-MIT-green)](https://github.com/makbulut1/cloud1/blob/main/LICENSE)

## Language / Dil

- [English](README.en.md)
- [Türkçe](README.tr.md)

## Quick Start

1. Clone the repository:
```bash
git clone https://github.com/makbulut1/cloud1.git
cd cloud1
```

2. Copy and configure environment variables:
```bash
cp .env.example .env
# Edit .env file with your credentials
```

3. Deploy:
```bash
make up
```

4. Remove infrastructure:
```bash
make down
```

For detailed documentation, please select your preferred language above.

## Project Purpose
This project provides automated WordPress deployment on AWS. Infrastructure is created with Terraform, configuration and installation is done with Ansible, and WordPress is deployed with Docker Compose. The entire process can be managed with a single command using Makefile.

## Project Structure
```
cloud1/
├── ansible/                # Ansible playbooks and settings
│   ├── wordpress-playbook.yml  # WordPress installation playbook
│   ├── ansible.cfg            # Ansible configuration
│   └── inventory.ini          # Auto-generated inventory
├── terraform/              # Terraform infrastructure files
│   ├── main.tf             # EC2, Security Group definitions
│   ├── .terraform.lock.hcl # Terraform lock file
│   └── terraform.tfstate*  # Terraform state files
├── docker-compose.yml      # WordPress, MySQL and phpMyAdmin services
├── Makefile                # Commands to manage the entire process
├── .gitignore             # Files to be ignored by Git
├── LICENSE                # MIT License file
├── CONTRIBUTING.md        # Contributing guide
└── README.md              # This file
```

## Features
- **AWS Infrastructure**: Automatic EC2 and security group creation with Terraform
- **WordPress Installation**: WordPress, MySQL and phpMyAdmin with Docker Compose
- **Automatic Configuration**: System configuration with Ansible
- **Secure Access**: Secure external access with DuckDNS
- **Easy Management**: Installation and removal with a single command using Makefile

## Requirements
- **AWS Account and Tools**
  - AWS account and configured AWS CLI
  - SSH key (~/.ssh/id_rsa.pub)
  - Sufficient IAM permissions

- **Software Requirements**
  - Docker & Docker Compose
  - Ansible 2.9+
  - Terraform
  - Git
  - Make

- **Accounts and Tokens**
  - DuckDNS account and token
  - AWS Access Key and Secret Key

## Installation and Usage

### 1. Clone the Repository
```bash
git clone https://github.com/makbulut1/cloud1.git
cd cloud1
```

### 2. Configure Environment Variables
```bash
cp .env.example .env
# Edit the .env file
```

### 3. Deploy Infrastructure
```bash
make up
```
This command will:
1. Create EC2 and security group in AWS with Terraform
2. Get EC2 IP and create Ansible inventory file
3. Connect to EC2 with Ansible and install WordPress with Docker Compose
4. Update domain with DuckDNS

### 4. Remove Infrastructure
```bash
make down
```

## Environment Variables (.env)
```env
# AWS
AWS_ACCESS_KEY_ID=your_aws_access_key
AWS_SECRET_ACCESS_KEY=your_aws_secret_key
AWS_DEFAULT_REGION=us-east-1

# DuckDNS
DUCKDNS_DOMAIN=your_domain
DUCKDNS_TOKEN=your_duckdns_token

# WordPress/MySQL
MYSQL_ROOT_PASSWORD=your_root_password
MYSQL_DATABASE=wordpress
MYSQL_USER=wordpress_user
MYSQL_PASSWORD=your_db_password
WORDPRESS_DB_HOST=mysql
WORDPRESS_DB_USER=wordpress_user
WORDPRESS_DB_PASSWORD=your_db_password
WORDPRESS_DB_NAME=wordpress
WORDPRESS_ADMIN_EMAIL=admin@example.com
WORDPRESS_ADMIN_PASSWORD=your_admin_password
WORDPRESS_SITE_TITLE=My WordPress Site

# Docker
DOCKER_COMPOSE_PROJECT_NAME=cloud1
WORDPRESS_PORT=8080
MYSQL_PORT=3306
```

## Flow and Components

### Makefile Commands
- `make up`: Deploys entire infrastructure
- `make down`: Removes infrastructure
- `make help`: Shows help message

### Terraform Components
- EC2 Instance (t2.micro)
- Security Group (SSH, HTTP, HTTPS)
- SSH Key Pair

### Ansible Tasks
- Docker and Docker Compose installation
- WordPress directory creation
- Docker Compose file copying
- WordPress startup
- DuckDNS domain update

### Docker Services
- WordPress (port 8080)
- MySQL (port 3306)
- phpMyAdmin (port 8081)

## Troubleshooting

### Common Issues

1. **AWS Connection Issues**
   - Check AWS credentials
   - Verify IAM permissions
   - Check region settings

2. **Docker Issues**
   - Check if Docker service is running
   - Check port conflicts
   - Check disk space

3. **WordPress Connection Issues**
   - Check database credentials
   - Check network connection
   - Check port forwarding

4. **DuckDNS Issues**
   - Check if token is valid
   - Check if domain is configured correctly
   - Check if IP update was successful

### Getting Help
1. Check error logs
2. Review troubleshooting section
3. Open an issue with detailed error information

## Contributing
Please read [CONTRIBUTING.md](CONTRIBUTING.md) for details on our code of conduct and the process for submitting pull requests.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details. 