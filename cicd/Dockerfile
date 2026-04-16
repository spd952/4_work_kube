ARG PACKAGE_NAME="untitled1_1.0.0_amd64.deb"

FROM ubuntu:latest
ARG PACKAGE_NAME

# Копируем deb-пакет
COPY ${PACKAGE_NAME} /tmp/

WORKDIR /tmp

# Распаковываем deb-пакет без установки
RUN apt-get update && \
    apt-get install -y dpkg && \
    dpkg-deb -x ${PACKAGE_NAME} / && \
    apt-get clean

# Делаем бинарник исполняемым
RUN chmod +x /usr/bin/untitled1 2>/dev/null || \
    chmod +x /usr/local/bin/untitled1 2>/dev/null || \
    echo "Binary not found"

ENTRYPOINT ["untitled1"]
