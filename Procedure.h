//--------------------------------------------------------------------------
// Procedure.h - contains description of common matrix.
//--------------------------------------------------------------------------

#include <stdio.h>
#include "Rand.h"
#include <string.h>
#include "Language.h"


//--------------------------------------------------------------------------
// Procedure language
class Procedure : public Language { //procedure
public:
    bool abstract_type;
    double popularity;

    Procedure() {};

// Input parameters from file.
    void In(Procedure &c, FILE *file);

// Random parameters.
    void InRnd(Procedure &c);

// Output parameters.
    void Out(Procedure &c, FILE *file);
};