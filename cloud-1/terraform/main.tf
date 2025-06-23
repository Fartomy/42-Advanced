provider "aws" {
  region = "us-east-1"
}

# Use an existing SSH key or generate one
resource "aws_key_pair" "deployer" {
  key_name   = "wordpress-key"
  public_key = file("~/.ssh/id_rsa.pub")
}

# Security Group for the WordPress Server
resource "aws_security_group" "wordpress_sg" {
  name        = "wordpress-security-group"
  description = "Allow HTTP, HTTPS, SSH"

  ingress {
    from_port   = 22
    to_port     = 22
    protocol    = "tcp"
    cidr_blocks = ["0.0.0.0/0"] # Allow SSH for Bastion access
  }

  ingress {
    from_port   = 443
    to_port     = 443
    protocol    = "tcp"
    cidr_blocks = ["0.0.0.0/0"] # Allow HTTPS
  }

  egress {
    from_port   = 0
    to_port     = 0
    protocol    = "-1"
    cidr_blocks = ["0.0.0.0/0"]
  }
}

# EC2 Instance for WordPress (FREE TIER)
resource "aws_instance" "wordpress" {
  ami             = "ami-04b4f1a9cf54c11d0" # Ubuntu 20.04 LTS
  instance_type   = "t2.micro"
  key_name        = aws_key_pair.deployer.key_name
  security_groups = [aws_security_group.wordpress_sg.name]

  # User data to install Docker & WordPress on startup
  user_data = <<-EOF
    #!/bin/bash
    apt-get update
    apt-get install -y docker.io docker-compose ansible
    systemctl enable docker
    systemctl start docker
    usermod -aG docker ubuntu
  EOF

  tags = {
    Name = "WordPress-Free"
  }
}

output "wordpress_ip" {
  value = aws_instance.wordpress.public_ip
}
