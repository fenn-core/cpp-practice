#include <iostream>
#include "vec2.hpp"

int main() {

    Vec2 vector_0(3, 4);
    Vec2 vector_1(6, 8);
    Vec2 vector_2 = vector_0.add(vector_1);

    std::cout<< vector_0.length() << "\n" << vector_1.length()
    <<"\n"<< vector_2.length() << "\n" <<std::endl;

    return 0;

}