#pragma once
#include <cmath>

// A 2D vector. Everything in v1 happens in a plane.
struct Vec2 {
    double x = 0.0;
    double y = 0.0;
};

// TODO (week 1): implement these. Each is one line.
inline Vec2 operator+(Vec2 a, Vec2 b) { (void)a; (void)b; return {}; }
inline Vec2 operator-(Vec2 a, Vec2 b) { (void)a; (void)b; return {}; }
inline Vec2 operator*(double k, Vec2 v) { (void)k; (void)v; return {}; }
inline double norm(Vec2 v) { (void)v; return 0.0; }   // length: sqrt(x^2 + y^2)
