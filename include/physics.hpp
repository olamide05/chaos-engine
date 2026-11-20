#pragma once
#include "state.hpp"

// Gravitational acceleration on the planet at position p:  a = -G*M * p / |p|^3
Vec2 acceleration(Vec2 p);

// Derivative of the state: d(pos)/dt = vel, d(vel)/dt = acceleration(pos)
State derivative(const State& s);

// Total energy per unit mass: E = 0.5*|v|^2 - G*M/|r|
// For a correct simulation this should stay (almost) constant.
double energy(const State& s);
