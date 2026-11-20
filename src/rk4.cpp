#include "rk4.hpp"
#include "physics.hpp"

// Tip: write two small helpers first:
//   State add(const State& a, const State& b);
//   State scale(double k, const State& s);
// Then RK4 is just the formula in rk4.hpp.

State euler_step(const State& s, double dt) {
    // TODO (week 2)
    (void)dt;
    return s;
}

State rk4_step(const State& s, double dt) {
    // TODO (week 1)
    (void)dt;
    return s;
}
