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
    vector<Carte> carti;
    int n;

    cout << "Cate carti vrei sa introduci? ";
    cin >> n;
    cin.ignore(); // pentru a consuma '\n' ramas dupa cin >>

    for (int i = 0; i < n; i++) {
        Carte c;
        cout << "Titlul cartii " << i + 1 << ": ";
        getline(cin, c.titlu);
        cout << "Autorul cartii " << i + 1 << ": ";
        getline(cin, c.autor);
        carti.push_back(c);
    }

    cout << "\nCartile introduse:\n";
    for (int i = 0; i < carti.size(); i++) {
        carti[i].afiseaza();
    }

    return 0;
}
