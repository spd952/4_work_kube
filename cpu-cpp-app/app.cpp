#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>

double cpu_load() {
    double x = 0.0;

    for (int i = 1; i < 1000000; i++) {
        x += std::sqrt(i) * std::sin(i);
    }

    return x;
}

int main() {
    std::cout << "CPU load app started" << std::endl;

    while (true) {
        double result = cpu_load();
        std::cout << "Working... result = " << result << std::endl;

        // небольшая пауза, чтобы контейнер не “умирал”
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
