#include <stdio.h>
#include <string.h>

#define MAX_STUDENTI 100

// Structură pentru a reprezenta un student
typedef struct {
    char nume[50];
    int varsta;
    float medie;
} Student;

// Funcție pentru a afișa un student
void afiseazaStudent(Student s) {
    printf("Nume: %s\n", s.nume);
    printf("Varsta: %d\n", s.varsta);
    printf("Medie: %.2f\n", s.medie);
    printf("------------\n");
}

// Funcție pentru a adăuga un student la array
int adaugaStudent(Student studenti[], int count, Student nou) {
    if (count < MAX_STUDENTI) {
        studenti[count] = nou;
        return count + 1;
    } else {
        printf("Eroare: numar maxim de studenti atins.\n");
        return count;
    }
}

// Funcție pentru a căuta un student după nume
int cautaStudent(Student studenti[], int count, const char* numeCautat) {
    for (int i = 0; i < count; i++) {
        if (strcmp(studenti[i].nume, numeCautat) == 0) {
            return i;
        }
    }
    return -1;
}

// Funcție pentru a afișa toți studenții
void afiseazaTotiStudentii(Student studenti[], int count) {
    for (int i = 0; i < count; i++) {
        afiseazaStudent(studenti[i]);
    }
}

int main() {
    Student studenti[MAX_STUDENTI];
    int numarStudenti = 0;

    // Adăugăm câțiva studenți
    Student s1 = {"Ana Popescu", 20, 9.5};
    Student s2 = {"Mihai Ionescu", 22, 8.7};

    numarStudenti = adaugaStudent(studenti, numarStudenti, s1);
    numarStudenti = adaugaStudent(studenti, numarStudenti, s2);

    // Afișăm toți studenții
    printf("Lista studentilor:\n");
    afiseazaTotiStudentii(studenti, numarStudenti);

    // Căutăm un student
    const char* numeCautat = "Ana Popescu";
    int index = cautaStudent(studenti, numarStudenti, numeCautat);
    if (index != -1) {
        printf("\nStudentul \"%s\" a fost gasit:\n", numeCautat);
        afiseazaStudent(studenti[index]);
    } else {
        printf("\nStudentul \"%s\" nu a fost gasit.\n", numeCautat);
    }

    return 0;
}
