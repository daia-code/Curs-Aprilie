#include <stdio.h>

// Structura Produs
typedef struct {
    char nume[50];
    float pret;
} Produs;

// Funcție care afișează un produs
void afiseazaProdus(Produs p) {
    printf("Produs: %s, Pret: %.2f lei\n", p.nume, p.pret);
}

int main() {
    // Array de 3 produse
    Produs produse[3] = {
        {"Paine", 3.5},
        {"Lapte", 5.0},
        {"Ciocolata", 7.2}
    };

    // Afișăm toate produsele
    for (int i = 0; i < 3; i++) {
        afiseazaProdus(produse[i]);
    }

    return 0;
}
