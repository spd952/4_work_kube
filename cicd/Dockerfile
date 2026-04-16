ARG PACKAGE_NAME="untitled1_1.0.0_amd64.deb"

FROM ubuntu:latest
ARG PACKAGE_NAME

# Копируем deb-пакет
COPY ${PACKAGE_NAME} /tmp/

WORKDIR /tmp

# Диагностика и установка
RUN echo "=== Checking package ===" && \
    ls -la ${PACKAGE_NAME} && \
    echo "=== Package info ===" && \
    dpkg --info ${PACKAGE_NAME} && \
    echo "=== Package dependencies ===" && \
    dpkg -I ${PACKAGE_NAME} | grep Depends && \
    echo "=== Installing package ===" && \
    apt-get update && \
    apt-get install -y /tmp/${PACKAGE_NAME}

ENTRYPOINT ["untitled1"]
