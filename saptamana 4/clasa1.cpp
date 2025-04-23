#include <iostream>
using namespace std;

// Definim o clasă Student
class Student {
public:
    string nume;
    int varsta;

    // Metodă care afișează informațiile studentului
    void afiseaza() {
        cout << "Nume: " << nume << endl;
        cout << "Varsta: " << varsta << " ani" << endl;
    }
};

int main() {
    // Creăm un obiect de tip Student
    Student s1;

    // Dăm valori atributelor
    s1.nume = "Ana";
    s1.varsta = 21;

    // Apelăm metoda pentru afișare
    s1.afiseaza();

    return 0;
}
