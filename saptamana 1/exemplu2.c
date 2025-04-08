#include <stdio.h>
#include <stdlib.h>

int main() {
    char varianta[5];
    int i;

    printf("Introduceti 5 caractere:\n");
    for(i = 0; i < 5; i++) {
        printf("Caracterul %d: ", i + 1);
        scanf(" %c", &varianta[i]);  // spațiu înainte de %c!
    }

    printf("Ati introdus: ");
    for(i = 0; i < 5; i++) {
        printf("%c ", varianta[i]);
    }

    return 0;
}
