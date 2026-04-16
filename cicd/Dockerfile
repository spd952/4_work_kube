ARG PACKAGE_NAME="untitled1_1.0.0_amd64.deb"

FROM ubuntu:latest
ARG PACKAGE_NAME

# Копируем deb-пакет (он в корне, так как контекст сборки - корень)
COPY ${PACKAGE_NAME} /tmp/

WORKDIR /tmp

RUN apt-get update && \
    apt-get install -y dpkg-dev && \
    dpkg -i ${PACKAGE_NAME} || true && \
    apt-get -f install -y && \
    chmod +x /usr/bin/untitled1

ENTRYPOINT ["untitled1"]
