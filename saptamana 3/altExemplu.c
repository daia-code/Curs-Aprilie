#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PERSOANE 3
#define MAX_NUME 50
#define MAX_TIP_ANIMAL 30

// Structura pentru animalul de companie
struct AnimalDeCompanie {
    char nume[MAX_NUME];
    char tip[MAX_TIP_ANIMAL]; // ex: caine, pisica
    int varsta;
};

// Structura pentru persoana
struct Persoana {
    char nume[MAX_NUME];
    int varsta;
    struct AnimalDeCompanie animal;
};

// Funcție pentru citirea datelor unei persoane și a animalului său
void citestePersoana(struct Persoana *p) {
    printf("Introduceti numele persoanei: ");
    fgets(p->nume, MAX_NUME, stdin);
    p->nume[strcspn(p->nume, "\n")] = 0;

    printf("Introduceti varsta persoanei: ");
    scanf("%d", &p->varsta);
    getchar(); // consumă newline lăsat de scanf

    printf("Introduceti numele animalului de companie: ");
    fgets(p->animal.nume, MAX_NUME, stdin);
    p->animal.nume[strcspn(p->animal.nume, "\n")] = 0;

    printf("Introduceti tipul animalului (ex: caine, pisica): ");
    fgets(p->animal.tip, MAX_TIP_ANIMAL, stdin);
    p->animal.tip[strcspn(p->animal.tip, "\n")] = 0;

    printf("Introduceti varsta animalului: ");
    scanf("%d", &p->animal.varsta);
    getchar(); // consumă newline
}

// Funcție pentru afișarea datelor unei persoane
void afiseazaPersoana(struct Persoana p) {
    printf("\nNume persoana: %s\n", p.nume);
    printf("Varsta: %d\n", p.varsta);
    printf("Animal de companie: %s (%s), %d ani\n",
           p.animal.nume, p.animal.tip, p.animal.varsta);
}

int main() {
    struct Persoana persoane[MAX_PERSOANE];

    printf("Introduceti datele pentru %d persoane:\n", MAX_PERSOANE);
    for (int i = 0; i < MAX_PERSOANE; i++) {
        printf("\n--- Persoana %d ---\n", i + 1);
        citestePersoana(&persoane[i]);
    }

    printf("\n=== Afisare persoane si animalele lor de companie ===\n");
    for (int i = 0; i < MAX_PERSOANE; i++) {
        afiseazaPersoana(persoane[i]);
    }

    return 0;
}
