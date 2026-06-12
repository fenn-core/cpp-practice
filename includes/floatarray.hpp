//
// Created by pusana on 6/12/26.
//

#pragma once

struct FloatArray {
    int size;
    int capacity;
    float *buffer;


    FloatArray(int called_size);

    FloatArray(FloatArray const &other);

    FloatArray& operator=(FloatArray const &other);

    ~FloatArray();

    void append(float element);


};