#pragma once
#include "vec2.hpp"

// State of the planet. The star is fixed at the origin (v1 simplification).
struct State {
    Vec2 pos;   // position
    Vec2 vel;   // velocity
};

// Units: G = 1, star mass M = 1. Keep these as constants, not magic numbers.
constexpr double G = 1.0;
constexpr double M = 1.0;
