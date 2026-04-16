ARG PACKAGE_NAME="untitled1_1.0.0_amd64.deb"

FROM ubuntu:latest
ARG PACKAGE_NAME

# Копируем deb-пакет
COPY ${PACKAGE_NAME} /tmp/

WORKDIR /tmp

# Обновляем систему и устанавливаем необходимые зависимости
RUN apt-get update && \
    apt-get install -y \
        dpkg \
        && \
    dpkg -i ${PACKAGE_NAME} || \
    (apt-get install -f -y && dpkg -i ${PACKAGE_NAME}) && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*

# Убеждаемся, что бинарник имеет правильные права
RUN chmod +x /usr/bin/untitled1 2>/dev/null || \
    chmod +x /usr/local/bin/untitled1 2>/dev/null || \
    echo "Binary not found in standard locations"

# Проверяем, что бинарник существует
RUN which untitled1 || find /usr -name "untitled1" 2>/dev/null

ENTRYPOINT ["untitled1"]
