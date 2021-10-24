//------------------------------------------------------------------------------
// Functional.h - contains description of functional language
//------------------------------------------------------------------------------

#include <stdio.h>
#include "Rand.h"
#include <string.h>
#include "Language.h"

//------------------------------------------------------------------------------

class Functional :public Language {
public:
    enum type {
        strict,
        dinamic
    };
    type tip;
    bool lazy;
    double popularity;

    Functional(){};

// Input parameters from file.
    void In(Functional &t, FILE *file);

// Random parameters.
    void InRnd(Functional &t);

// Output
    void Out(Functional &t, FILE *file);

};