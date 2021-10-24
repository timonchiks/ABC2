//------------------------------------------------------------------------------
// Container.cpp - Container handling functions.
//------------------------------------------------------------------------------
#include "Container.h"
#include <stdio.h>
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Clear data from Container.
void Container::Clear(Container &c) {
    for (int i = 0; i < c.len; i++) {
        delete c.cont[i];
    }
    c.len = 0;
}

//------------------------------------------------------------------------------
// Input Container's data.
void Container::In(FILE *file) {
    while (len < 30000 && !feof(file)) {
        if ((cont[len] = Language::InSt(file)) != nullptr) {
            len++;
        }
    }


}

// Random input to Container.
void Container::InRnd(Container &c, int size) {
    while (c.len < 30000 && c.len < size) {
        if ((c.cont[c.len] = Language::InRnd()) != nullptr) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Output Container data.
void Container::Out(Container &c, FILE *file) {
    fprintf(file, "%s%d%s", "Container contains ", c.len, " elements.");
    for (int i = 0; i < c.len; i++) {
        fprintf(file, "%s", "\n");
        //Out(*(c.cont[i]), file);
    }
}

//------------------------------------------------------------------------------
// Shaker sort for container.
void Container::ShakerSort(Container &c, int size) {
    bool swapped = true;
    int start = 0;
    int end = size - 1;

    while (swapped) {
        swapped = false;
        for (int i = start; i < end; ++i) {
            if (Language::Average(*c.cont[i]) < Language::Average(*c.cont[i + 1])) {
                Language::Swap(*c.cont[i], *c.cont[i + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
        swapped = false;
        --end;
        for (int i = end - 1; i >= start; --i) {
            if (Language::Average(*c.cont[i]) < Language::Average(*c.cont[i + 1])) {
                Language::Swap(*c.cont[i], *c.cont[i + 1]);
                swapped = true;
            }
        }
        ++start;
    }
}
