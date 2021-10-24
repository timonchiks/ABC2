#ifndef TASK2_LANGUAGE_H
#define TASK2_LANGUAGE_H
//------------------------------------------------------------------------------
// Language.h - contains definition languages
//------------------------------------------------------------------------------
#include <stdexcept>
#include <string.h>

//------------------------------------------------------------------------------
// Structure summarizing all shapes.
class Language {
public:
    int year;
    std::string name;
    // Input
        static Language *InSt(FILE* file);

    // Random input
        static Language *InRnd();

    // Output
        void Out(Language &m, FILE* file);

    // Get square
        static double Average(Language &m);

    // Swap function
        static void Swap(Language &m1, Language &m2);
};


#endif