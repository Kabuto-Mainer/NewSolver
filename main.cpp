#include <iostream>
#include <cmath>

int main() {
    // пока коэффициенты просто зашиты в код
    const double a = 1.0;
    const double b = -3.0;
    const double c = 2.0;

    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        std::cout << "Действительных корней нет" << std::endl;
        return 0;
    }

    double x1 = (-b + std::sqrt(discriminant)) / (2 * a);
    double x2 = (-b - std::sqrt(discriminant)) / (2 * a);

    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;

    return 0;
}
