#include <cassert>
#include <cmath>
#include <iostream>
#include "solver.h"

bool almostEqual(double a, double b) {
    return std::fabs(a - b) < 1e-9;
}

int main() {
    // два разных действительных корня: x^2 - 3x + 2 = 0
    QuadraticResult r1 = solveQuadratic(1, -3, 2);
    assert(r1.hasRealRoots);
    assert(almostEqual(r1.x1, 2.0));
    assert(almostEqual(r1.x2, 1.0));

    // один корень (дискриминант = 0): x^2 - 2x + 1 = 0
    QuadraticResult r2 = solveQuadratic(1, -2, 1);
    assert(r2.hasRealRoots);
    assert(almostEqual(r2.x1, 1.0));
    assert(almostEqual(r2.x2, 1.0));

    // нет действительных корней (дискриминант < 0): x^2 + 1 = 0
    QuadraticResult r3 = solveQuadratic(1, 0, 1);
    assert(!r3.hasRealRoots);

    std::cout << "Все тесты пройдены!" << std::endl;
    return 0;
}
