#include <iostream>
#include <vector>
using namespace std;

// Clasa Carte
class Carte {
public:
    string titlu;
    string autor;

    void afiseaza() {
        cout << "Titlu: " << titlu << ", Autor: " << autor << endl;
    }
};

int main() {
    // Vector de obiecte Carte
    vector<Carte> carti;

    // Cream 3 carti
    Carte c1 = {"Baltagul", "Mihail Sadoveanu"};
    Carte c2 = {"Ion", "Liviu Rebreanu"};
    Carte c3 = {"Morometii", "Marin Preda"};

    // Le adaugam in vector
    carti.push_back(c1);
    carti.push_back(c2);
    carti.push_back(c3);

    // Afișăm toate cărțile
    cout << "Lista cartilor:\n";
    for (int i = 0; i < carti.size(); i++) {
        carti[i].afiseaza();
    }

    return 0;
}
