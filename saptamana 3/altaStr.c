#include <stdio.h>

// Structura Animal
typedef struct {
    char nume[30];
    int varsta;
} Animal;

// Funcție care afișează un animal
void afiseazaAnimal(Animal a) {
    printf("Nume animal: %s\n", a.nume);
    printf("Varsta: %d ani\n", a.varsta);
}

int main() {
    // Declarăm un animal
    Animal caine = {"Rex", 4};

    // Afișăm animalul
    afiseazaAnimal(caine);

    return 0;
}
