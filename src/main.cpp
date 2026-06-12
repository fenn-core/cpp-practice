#include <iostream>
#include "vec2.hpp"
#include "floatarray.hpp"

int main() {


    Vec2 vector_0(3, 4);
    Vec2 vector_1(6, 8);
    Vec2 vector_2 = vector_0.add(vector_1);

    std::cout<< vector_0.length() << "\n" << vector_1.length()
    <<"\n"<< vector_2.length() << "\n" <<std::endl;

    std::cout<< (vector_0.subtract(vector_1)).length() << "\n" <<std::endl;

    std::cout<< (vector_0.dotproduct(vector_1)) << "\n" <<std::endl;

    std::cout<< (vector_0.scale(5)).length() << "\n" <<std::endl;


    FloatArray array{1};

    array.append(12.8);
    array.append(3.141592624);
    array.append(1524);
    array.append(0.1212121);

    FloatArray array1 = array;

    array1.append(151);

    for (int i = 0; i < array.size; ++i) {
        std::cout << array.buffer[i] << std::endl;
    }

    std::cout << "\n" << std::endl;

    for (int i = 0; i < array1.size; ++i) {
        std::cout << array1.buffer[i] << std::endl;
    }

    FloatArray array2(10);

    std::cout << "\n" << std::endl;

    array2 = array1;

    for (int i = 0; i < array1.size; ++i) {
        std::cout << array1.buffer[i] << std::endl;
    }

    std::cout << "\n" << std::endl;

    for (int i = 0; i < array2.size; ++i) {
        std::cout << array2.buffer[i] << std::endl;
    }



    return 0;

}