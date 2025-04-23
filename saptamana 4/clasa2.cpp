#include <iostream>
using namespace std;

// Clasa Masina
class Masina {
public:
    string marca;
    int an;

    // Metodă care afișează datele
    void afiseaza() {
        cout << "Marca: " << marca << endl;
        cout << "An fabricatie: " << an << endl;
    }
};

int main() {
    // Creăm un obiect de tip Masina
    Masina m1;

    // Atribuim valori
    m1.marca = "Dacia";
    m1.an = 2020;

    // Afișăm informațiile
    m1.afiseaza();

    return 0;
}
