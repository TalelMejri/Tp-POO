#include <iostream>
#include <vector>
using namespace std;

template<class T, class U>
class Couple {
public:
    T cle;
    U valeur;

    Couple() : cle(), valeur() {}

    Couple(T c, U v) : cle(c), valeur(v) {}

    friend ostream& operator<<(ostream& os, const Couple<T, U>& c) {
        os << "(" << c.cle << ", " << c.valeur << ")";
        return os;
    }

    bool operator==(const Couple<T, U>& other) const {
        return cle == other.cle && valeur == other.valeur;
    }
};


template<class T, class U>
class monMap {
private:
    vector<Couple<T, U>> elements;

public:
    monMap() = default;

    monMap(const vector<Couple<T, U>>& elems) : elements(elems) {}

    int Rechercher(T cle) {
        for (int i = 0; i < elements.size(); ++i) {
            if (elements[i].cle == cle)
                return i;
        }
        return -1;
    }

    void ajouter(Couple<T, U> element) {
        if (Rechercher(element.cle) == -1) {
            elements.push_back(element);
        }
    }

    void supprimer(Couple<T, U> element) {
        int index = Rechercher(element.cle);
        if (index != -1 && elements[index] == element) {
            elements.erase(elements.begin() + index);
        }
    }

    Couple<T, U>& operator[](int i) {
        return elements[i];
    }

    friend ostream& operator<<(ostream& os, const monMap<T, U>& m) {
        for (const auto& el : m.elements) {
            os << el << " ";
        }
        return os;
    }
};

int main() {
    monMap<string, int> m;

    m.ajouter(Couple<string, int>("A", 10));
    m.ajouter(Couple<string, int>("B", 20));
    m.ajouter(Couple<string, int>("C", 30));

    cout << "Contenu de monMap: " << m << endl;

    int pos = m.Rechercher("B");
    cout << "Indice de la cle 'B' : " << pos << endl;

    m.supprimer(Couple<string, int>("B", 20));
    cout << "Apres suppression de (B,20): " << m << endl;

    m[0].valeur = 99;
    cout << "Apres modification du premier element: " << m << endl;

    return 0;
}
