#ifndef SOLVER_H
#define SOLVER_H

struct QuadraticResult {
    bool hasRealRoots;
    double x1;
    double x2;
};

QuadraticResult solveQuadratic(double a, double b, double c);

#endif
