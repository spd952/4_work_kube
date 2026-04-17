FROM gcc:13

WORKDIR /app

COPY app.cpp .

RUN g++ app.cpp -O2 -o app

CMD ["./app"]
