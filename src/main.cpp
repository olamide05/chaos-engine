#include <fstream>
#include <iostream>
#include "physics.hpp"
#include "rk4.hpp"

// Week 1 goal: simulate one circular orbit and write it to data/orbit.csv
//
// Starting state for a circular orbit (G = M = 1):
//   pos = (1, 0), vel = (0, 1)
//   period = 2*pi, energy should stay at -0.5
int main() {
    State s{{1.0, 0.0}, {0.0, 1.0}};
    const double dt = 0.01;
    const int steps = 2000;          // a bit more than 3 orbits

    std::ofstream out("data/orbit.csv");
    out << "t,x,y,vx,vy,energy\n";

    // TODO (week 1):
    // for each step:
    //   write t, s.pos.x, s.pos.y, s.vel.x, s.vel.y, energy(s) to the file
    //   s = rk4_step(s, dt)
    (void)dt; (void)steps;

    std::cout << "wrote data/orbit.csv\n";
    return 0;
}
