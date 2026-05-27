//
// Created by pusana on 5/27/26.
//

#include "vec2.hpp"
#include <cmath>

Vec2::Vec2(float x_value, float y_value)
    : x(x_value), y(y_value) {
}

float Vec2::length() const {
    return sqrt(x * x + y * y);
}

Vec2 Vec2::add(const Vec2& other) const {
    return Vec2(x + other.x, y + other.y);
}