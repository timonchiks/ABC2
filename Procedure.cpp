//------------------------------------------------------------------------------
// Procedure.cpp - implementation of Procedure.h.
//------------------------------------------------------------------------------

#include "Procedure.h"

//------------------------------------------------------------------------------
// Input parameters from file.
void Procedure::In(Procedure &c, FILE *file) {
    fscanf(file, "%100s", &c.name);
    fscanf(file, "%i", &c.year);
    fscanf(file, "%lf", &c.popularity);
    fscanf(file, "%i", &c.abstract_type);
}

// Random parameters.
void Procedure::InRnd(Procedure &c) {
    c.abstract_type = bRandom();
    c.popularity = dRandom();
    c.year = yRandom();
    int k = 0;
    for(char i = 'a'; i < 'z'; i++){
        c.name[k] = i;
        k++;
    }
}

//------------------------------------------------------------------------------
// Output
void Procedure::Out(Procedure &c, FILE *file) {
    if (c.abstract_type){

    }
    fprintf(file, "It is Procedure language: Have abstract type %i\n", c.abstract_type);
    fprintf(file, ". Popularity = %lf\n", c.popularity);
    fprintf(file, ". Year = %i\n", c.year);
    fprintf(file, ". Parameter = %lf", c.Average(c));
}

//------------------------------------------------------------------------------