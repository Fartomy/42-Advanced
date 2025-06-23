# Cloud1: AWS Üzerinde Otomatik WordPress Kurulumu

## Dil / Language

- [English](README.en.md)

## Hızlı Başlangıç

1. Depoyu klonlayın:
```bash
git clone https://github.com/makbulut1/cloud1.git
cd cloud1
```

2. Ortam değişkenlerini kopyalayın ve yapılandırın:
```bash
cp .env.example .env
# .env dosyasını kimlik bilgilerinizle düzenleyin
```

3. Kurulumu başlatın:
```bash
make up
```

4. Altyapıyı kaldırın:
```bash
make down
```

Detaylı dokümantasyon için lütfen yukarıdan tercih ettiğiniz dili seçin.

## Proje Amacı
Bu proje, AWS üzerinde otomatik olarak WordPress kurulumunu sağlar. Altyapı Terraform ile oluşturulur, yapılandırma ve kurulum Ansible ile yapılır, WordPress ise Docker Compose ile ayağa kaldırılır. Tüm süreç Makefile ile tek komutla yönetilebilir.

## Özellikler
- **AWS Altyapısı**: Terraform ile otomatik EC2 ve güvenlik grubu oluşturma
- **WordPress Kurulumu**: Docker Compose ile WordPress, MySQL ve phpMyAdmin
- **Otomatik Yapılandırma**: Ansible ile sistem yapılandırması
- **Güvenli Erişim**: DuckDNS ile güvenli dış erişim
- **Kolay Yönetim**: Makefile ile tek komutla kurulum ve kaldırma

## Gereksinimler
- **AWS Hesabı ve Araçları**
  - AWS hesabı ve yapılandırılmış AWS CLI
  - SSH anahtarı (~/.ssh/id_rsa.pub)
  - Yeterli IAM izinleri

- **Yazılım Gereksinimleri**
  - Docker & Docker Compose
  - Ansible 2.9+
  - Terraform
  - Git
  - Make

- **Hesap ve Token'lar**
  - DuckDNS hesabı ve token
  - AWS Access Key ve Secret Key

## Kurulum ve Kullanım

### 1. Depoyu Klonlama
```bash
git clone https://github.com/makbulut1/cloud1.git
cd cloud1
```

### 2. Ortam Değişkenlerini Ayarlama
```bash
cp .env.example .env
# .env dosyasını düzenleyin
```

### 3. Altyapıyı Kurma
```bash
make up
```
Bu komut sırasıyla:
1. Terraform ile AWS'de EC2 ve güvenlik grubu oluşturur
2. EC2 IP'sini alır ve Ansible inventory dosyasını oluşturur
3. Ansible ile EC2'ye bağlanıp WordPress'i Docker Compose ile kurar
4. DuckDNS ile domain güncellemesi yapar

### 4. Altyapıyı Kaldırma
```bash
make down
```

## Ortam Değişkenleri (.env)
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

## Akış ve Bileşenler

### Makefile Komutları
- `make up`: Tüm altyapıyı kurar
- `make down`: Altyapıyı kaldırır
- `make help`: Yardım mesajını gösterir

### Terraform Bileşenleri
- EC2 Instance (t2.micro)
- Security Group (SSH, HTTP, HTTPS)
- SSH Key Pair

### Ansible Görevleri
- Docker ve Docker Compose kurulumu
- WordPress dizini oluşturma
- Docker Compose dosyalarını kopyalama
- WordPress'i başlatma
- DuckDNS domain güncellemesi

### Docker Servisleri
- WordPress (port 8080)
- MySQL (port 3306)
- phpMyAdmin (port 8081)

## Sorun Giderme

### Sık Karşılaşılan Sorunlar

1. **AWS Bağlantı Sorunları**
   - AWS kimlik bilgilerini kontrol edin
   - IAM izinlerini doğrulayın
   - Bölge ayarlarını kontrol edin

2. **Docker Sorunları**
   - Docker servisinin çalıştığını kontrol edin
   - Port çakışmalarını kontrol edin
   - Disk alanını kontrol edin

3. **WordPress Bağlantı Sorunları**
   - Veritabanı kimlik bilgilerini kontrol edin
   - Ağ bağlantısını kontrol edin
   - Port yönlendirmelerini kontrol edin

4. **DuckDNS Sorunları**
   - Token'ın geçerli olduğunu kontrol edin
   - Domain'in doğru yapılandırıldığını kontrol edin
   - IP güncellemesinin başarılı olduğunu kontrol edin
