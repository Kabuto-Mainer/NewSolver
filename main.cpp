#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    std::cout << "Введите коэффициенты a, b, c через пробел: ";
    std::cin >> a >> b >> c;

    if (a == 0) {
        std::cout << "a не может быть равно 0, это не квадратное уравнение" << std::endl;
        return 0;
    }

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
