#include "Animal.h"
#include <iostream>
using namespace std;

// Constructorul clasei Animal
Animal::Animal(string n) : nume(n) {}

// Metoda virtuală care va fi suprascrisă în clasele derivate
void Animal::sunet() const {
    cout << "Animalul face un sunet." << endl;
}

// Metoda care afișează numele animalului
void Animal::afiseaza() {
    cout << "Numele animalului este: " << nume << endl;
}
