#!/bin/bash
set -e

# First, run the original WordPress entrypoint
docker-entrypoint.sh apache2-foreground &

# Wait for MySQL to be ready
until mysql -h"$WORDPRESS_DB_HOST" -u"$WORDPRESS_DB_USER" -p"$WORDPRESS_DB_PASSWORD" -e "SELECT 1" >/dev/null 2>&1; do
    echo "Waiting for MySQL to be ready..."
    sleep 5
done

# Install WordPress if not already installed
if ! wp core is-installed --allow-root; then
    echo "Installing WordPress..."
    wp core install \
        --url="http://$(hostname -i):${WORDPRESS_PORT:-8080}" \
        --title="${WORDPRESS_SITE_TITLE:-My WordPress Site}" \
        --admin_user="admin" \
        --admin_password="${WORDPRESS_ADMIN_PASSWORD:-admin123}" \
        --admin_email="${WORDPRESS_ADMIN_EMAIL:-admin@example.com}" \
        --skip-email \
        --allow-root
fi

# Keep container running
wait 