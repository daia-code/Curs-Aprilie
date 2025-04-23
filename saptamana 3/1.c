#include <stdio.h>

// Structura Student
typedef struct {
    char nume[50];
    int varsta;
} Student;

// Funcție care afișează un student
void afiseazaStudent(Student s) {
    printf("Nume: %s, Varsta: %d\n", s.nume, s.varsta);
}

int main() {
    // Array de 2 studenți
    Student studenti[2] = {
        {"Maria", 19},
        {"Ion", 21}
    };

    // Afișăm toți studenții
    for (int i = 0; i < 2; i++) {
        afiseazaStudent(studenti[i]);
    }

    return 0;
}
