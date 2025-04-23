#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
public:
    string nume;

    // Constructor
    Animal(string n);

    // Metodă virtuală pentru a descrie sunetul
    virtual void sunet() const;

    // Metodă pentru a afișa numele animalului
    void afiseaza();
};

#endif
