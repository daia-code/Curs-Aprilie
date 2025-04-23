#include <iostream>
#include "Animal.h"
#include "Caine.h"
using namespace std;

int main() {
    // Instanțierea unui obiect de tip Animal
    Animal* animal1 = new Animal("Genericul");
    animal1->afiseaza();
    animal1->sunet();

    // Instanțierea unui obiect de tip Caine
    Animal* animal2 = new Caine("Rex");
    animal2->afiseaza();
    animal2->sunet();

    // Curățăm memoria alocată
    delete animal1;
    delete animal2;

    return 0;
}
