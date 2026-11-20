// Plain-assert tests: no framework needed. Run with: ./build/tests
#include <cassert>
#include <cmath>
#include <iostream>
#include "physics.hpp"
#include "rk4.hpp"

static bool close(double a, double b, double tol) { return std::fabs(a - b) < tol; }

int main() {
    // TODO (week 1): uncomment each test once the code it checks is written.

    // 1. Vec2 maths
    // assert(close(norm(Vec2{3, 4}), 5.0, 1e-12));

    // 2. Energy of the circular orbit start state is -0.5
    // State s{{1, 0}, {0, 1}};
    // assert(close(energy(s), -0.5, 1e-12));

    // 3. After one full period (2*pi) the planet is back near (1, 0)
    // 4. Energy drift over 10 orbits stays below 1e-6 with dt = 0.01 (RK4)

    std::cout << "all tests passed\n";
    return 0;
}
