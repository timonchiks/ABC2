//------------------------------------------------------------------------------
// Objective.h - contains description of objective language
//-----------------------------------------------------------------------------

#include <stdio.h>
#include "Rand.h"
#include "Language.h"

//------------------------------------------------------------------------------
// Objective language
class Objective : public Language {
public:
    enum type {
        one,
        many,
        interface
    };
    type tip;
    double popularity;

    Objective(){};

// Input parameters from file.
    void In(Objective &d, FILE *file);

// Random parameters.
    void InRnd(Objective &d);

// Output parameters.
    void Out(Objective &d, FILE *file);

};
