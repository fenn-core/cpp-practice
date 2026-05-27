//
// Created by pusana on 5/27/26.
//

#pragma once

struct Vec2 {
    float x, y;

    Vec2(float x_value, float y_value);

    float length() const;
    Vec2 add(const Vec2& other) const;

};