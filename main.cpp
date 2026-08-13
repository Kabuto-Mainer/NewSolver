#include <iostream>
#include "solver.h"

int main() {
    double a, b, c;

    std::cout << "Введите коэффициенты a, b, c через пробел: ";
    std::cin >> a >> b >> c;

    if (a == 0) {
        std::cout << "a не может быть равно 0, это не квадратное уравнение" << std::endl;
        return 0;
    }

    QuadraticResult result = solveQuadratic(a, b, c);

    if (!result.hasRealRoots) {
        std::cout << "Действительных корней нет" << std::endl;
        return 0;
    }

    std::cout << "x1 = " << result.x1 << std::endl;
    std::cout << "x2 = " << result.x2 << std::endl;

    return 0;
}
