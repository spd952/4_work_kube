ARG PACKAGE_NAME="untitled1_1.0.0_amd64.deb"

FROM ubuntu:latest
ARG PACKAGE_NAME

# Копируем deb-пакет
COPY ${PACKAGE_NAME} /tmp/

WORKDIR /tmp

# Устанавливаем пакет с автоматическим разрешением зависимостей
RUN apt-get update && \
    apt-get install -y ./${PACKAGE_NAME} && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*

ENTRYPOINT ["untitled1"]
