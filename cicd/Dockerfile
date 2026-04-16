FROM ubuntu:latest

# Создаём директорию для приложения
RUN mkdir -p /app

# Копируем бинарник из артефакта
COPY usr/bin/untitled1 /app/untitled1

# Делаем исполняемым
RUN chmod +x /app/untitled1

# Устанавливаем рабочую директорию
WORKDIR /app

# Запускаем приложение
ENTRYPOINT ["/app/untitled1"]
