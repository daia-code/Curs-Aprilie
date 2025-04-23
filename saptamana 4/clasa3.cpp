#include <iostream>
using namespace std;

// Clasa Carte
class Carte {
public:
    string titlu;
    string autor;

    // Metodă care afișează informațiile despre carte
    void afiseaza() {
        cout << "Titlu: " << titlu << endl;
        cout << "Autor: " << autor << endl;
    }
};

int main() {
    // Creăm un obiect de tip Carte
    Carte c1;

    // Setăm valorile
    c1.titlu = "Amintiri din copilarie";
    c1.autor = "Ion Creanga";

    // Afișăm datele
    c1.afiseaza();

    return 0;
}
