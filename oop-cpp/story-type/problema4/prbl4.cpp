#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Produs
{
private:
    string denumire;
    int pret;
    int stoc;

public:
    Produs(string d, int p, int s) : denumire(d), pret(p), stoc(s) {}

    string getDenumire() const { return denumire; }
    int getPret() const { return pret; }
    int getStoc() const { return stoc; }

    void addStock(int cantitate) { stoc += cantitate; }
    void sell(int cantitate) { stoc -= cantitate; }
};

class Magazin
{
private:
    vector<Produs> produse;

public:
    void addProduct(string denumire, int pret, int stoc)
    {
        produse.push_back({denumire, pret, stoc});
        cout << "Produsul " << denumire << " a fost adaugat in stoc" << endl;
    }

    void sellProduct(string denumire, int cantitate)
    {
        for (auto produs : produse)
        {
            if (produs.getDenumire() == denumire)
            {
                if (produs.getStoc() >= cantitate)
                {
                    produs.sell(cantitate);
                    cout << "S-au vandut " << cantitate << " bucati din " << denumire << endl;
                }
                else
                {
                    cout << "Stoc insuficient pentru cererea de " << cantitate << " produse " << denumire << endl;
                }
                return;
            }
        }
    }
};

int main()
{
    Magazin magazin;

    magazin.addProduct("Laptop", 1000, 10);
    magazin.addProduct("Telefon", 1500, 15);
    magazin.sellProduct("Laptop", 2);
    magazin.addProduct("Tableta", 500, 20);

    return 0;
}