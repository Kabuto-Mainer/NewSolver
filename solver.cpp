#include "solver.h"
#include <cmath>

QuadraticResult solveQuadratic(double a, double b, double c) {
    QuadraticResult result;

    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        result.hasRealRoots = false;
        result.x1 = 0;
        result.x2 = 0;
        return result;
    }

    result.hasRealRoots = true;
    result.x1 = (-b + std::sqrt(discriminant)) / (2 * a);
    result.x2 = (-b - std::sqrt(discriminant)) / (2 * a);

    return result;
}
