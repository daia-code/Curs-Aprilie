#include "Caine.h"
#include <iostream>
using namespace std;

// Constructorul clasei Caine
Caine::Caine(string n) : Animal(n) {}

// Suprascrierea metodei sunet() din clasa de bază Animal
void Caine::sunet() const {
    cout << "Cainele latra!" << endl;
}
