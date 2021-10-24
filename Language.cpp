//------------------------------------------------------------------------------
// Language.cpp - contains PROCEDURE language
//------------------------------------------------------------------------------

#include <stdexcept>
#include "Language.h"
#include "Functional.h"
#include "Objective.h"
#include "Procedure.h"

//------------------------------------------------------------------------------
// Input parameters from file.
Language *Language::InSt(FILE *file) {
    Language *mat;
    int k;
    fscanf(file, "%d", &k);
    switch (k) {
        case 1:
            mat = new Functional;
            return mat;
        case 2:
            mat = new Procedure;
            return mat;
        case 3:
            mat = new Objective;
            return mat;
        default:
            throw std::invalid_argument("Incorrect");
    }

}

// Random values
Language *Language::InRnd() {
    Language *mat;
    int k = rand() % 2 + 1;
    switch (k) {
        case 1:
            mat = new Language;
            return mat;
        case 2:
            mat = new Language;
            return mat;
        case 3:
            mat = new Language;
            return mat;
        default:
            return nullptr;
    }
}

//------------------------------------------------------------------------------
// Output Language.
void Language::Out(Language &m, FILE *file) {
    /*switch (m.k) {
        case Language::PROCEDURE:
            Out(m.c, file);
            break;
        case Language::OBJECTIVE:
            Out(m.d, file);
            break;
        case Language::FUNCTIONAL:
            Out(m.t, file);
            break;
        default:
            fprintf(file, "%s", "Incorrect");
    }*/
}

//------------------------------------------------------------------------------
// Get average
double Language::Average(Language &m) {
    return (m.year * 1.0 / (m.name.length()));
        /*switch (m) {
        case Language::PROCEDURE:
            return Average(m.c);
        case Language::OBJECTIVE:
            return Average(m.d);
        case Language::FUNCTIONAL:
            return Average(m.t);
        default:
            return 0.0;
    }*/
}

//------------------------------------------------------------------------------
// Swap function
void Language::Swap(Language &m1, Language &m2) {
    Language temp;
    temp = m1;
    m1 = m2;
    m2 = temp;
}