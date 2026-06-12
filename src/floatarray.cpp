//
// Created by pusana on 6/12/26.
//

#include "floatarray.hpp"
#include <stdexcept>


FloatArray::FloatArray(int called_capacity)
    : size(0),
      capacity(called_capacity),
     buffer(nullptr)
    {

    if (capacity <= 0) {
        throw std::invalid_argument("called capacity must be greater than 0");
        }

    buffer = new float[called_capacity]{};

    }

FloatArray::FloatArray(FloatArray const &other)
    : size(other.size),
      capacity(other.capacity),
      buffer(new float[capacity]{})
    {
    for (int i = 0; i < size; ++i) {
        buffer[i] = other.buffer[i];
    }
}

FloatArray& FloatArray::operator=(FloatArray const &other) {
    if (this == &other) {
        return *this;
    }

    delete[] buffer;
    size = other.size;
    capacity = other.capacity;
    buffer = new float[capacity]{};

    for (int i = 0; i < size; ++i) {
        buffer[i] = other.buffer[i];
    }

    return *this;

}


FloatArray::~FloatArray() {
    delete[] buffer;
}

void FloatArray::append(float const element) {

    if (capacity > size) {
        buffer[size] = element;
    }

    else {
        auto *new_buffer = new float[size * 2]{};
        for (int i = 0; i < size; ++i) {
            new_buffer[i] = buffer[i];
        }
        delete[] buffer;
        new_buffer[size] = element;
        buffer = new_buffer;
        capacity = size * 2 ;
    }

    size++ ;

}


