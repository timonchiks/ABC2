#ifndef TASK1_CONTAINER_H
#define TASK1_CONTAINER_H

//------------------------------------------------------------------------------
// Container.h - contains data type that represents simple Container.
//------------------------------------------------------------------------------

#include "Language.h"

//------------------------------------------------------------------------------
// Container based on 1-dimension array.
class Container {
public:
    enum {
        max_len = 30000
    }; // Max length.
    int len = 0; // Current length.
    Language *cont[30000];

// Deleting Container's data.
    void Clear(Container &c);

// Input data.
    void In(FILE *file);

// Random input.
    void InRnd(Container &c, int size);

// Output Container's data.
    void Out(Container &c, FILE *file);

// Get sum of squares of figures.
    double SquareSum(Container &c);

// Shaker Sort for container.
    void ShakerSort(Container &c, int size);

    Container(){};
};

#endif //TASK1_CONTAINER_H