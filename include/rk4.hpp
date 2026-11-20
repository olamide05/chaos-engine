#pragma once
#include "state.hpp"

// One Euler step (week 2: compare against RK4 to show why RK4 matters).
State euler_step(const State& s, double dt);

// One classic 4th-order Runge-Kutta step:
//   k1 = f(s)
//   k2 = f(s + dt/2 * k1)
//   k3 = f(s + dt/2 * k2)
//   k4 = f(s + dt   * k3)
//   s_next = s + dt/6 * (k1 + 2*k2 + 2*k3 + k4)
// where f = derivative() from physics.hpp.
State rk4_step(const State& s, double dt);
