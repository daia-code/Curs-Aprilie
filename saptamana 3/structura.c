#include <stdio.h>

// Structura Student
typedef struct {
    char nume[50];
    int varsta;
} Student;

// Funcție care afișează un student
void afiseazaStudent(Student s) {
    printf("Nume: %s\n", s.nume);
    printf("Varsta: %d ani\n", s.varsta);
}

int main() {
    // Declarăm un student
    Student s1 = {"Andrei", 20};

    // Afișăm studentul
    afiseazaStudent(s1);

    return 0;
}
