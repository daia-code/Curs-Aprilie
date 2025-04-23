#ifndef CAINE_H
#define CAINE_H

#include "Animal.h"

class Caine : public Animal {
public:
    // Constructor
    Caine(string n);

    // Suprascrierea metodei sunet() din clasa Animal
    void sunet() const override;
};

#endif
