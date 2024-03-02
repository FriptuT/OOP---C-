#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

class LocParcare
{
private:
    string nrLoc;
    int etaj;

public:
    LocParcare(string nrLoc, int etaj) : nrLoc(nrLoc), etaj(etaj) {}
    string getLoc()
    {
        return nrLoc;
    }
    int getEtaj()
    {
        return etaj;
    }

    friend ostream &operator<<(ostream &os, const LocParcare &lp)
    {
        os << "Etaj: " << lp.etaj << ", Numar: " << lp.nrLoc;
        return os;
    }
};

class Parcare
{
private:
    map<int, vector<LocParcare>> locuriLibere;
    map<int, vector<LocParcare>> locuriOcupate;

public:
    void adaugaLocLiber(int etaj, string numarLoc)
    {
        locuriLibere[etaj].push_back(LocParcare(numarLoc, etaj));
    }

    bool ocupaLoc(int etaj, string numarLoc)
    {
        for (auto it = locuriLibere[etaj].begin(); it != locuriLibere[etaj].end(); it++)
        {
            if (it->getLoc() == numarLoc)
            {
                locuriOcupate[etaj].push_back(*it);
                locuriLibere[etaj].erase(it);
                return true;
            }
        }
        return false;
    }

    bool elibereazaLoc(int etaj, string numarLoc)
    {
        for (auto it = locuriOcupate[etaj].begin(); it != locuriOcupate[etaj].end(); it++)
        {
            if (it->getLoc() == numarLoc)
            {
                locuriLibere[etaj].push_back(*it);
                locuriOcupate[etaj].erase(it);
                return true;
            }
        }
        return false;
    }

    LocParcare gasesteLocLiberPeEtaj(int etaj)
    {
        if (!locuriLibere[etaj].empty())
        {
            return locuriLibere[etaj].front();
        }
        else
        {
            cout << "Nu exista locuri libere pe etajul " << etaj <<endl;
        }
    }

    void afisareLocuri()
    {
        cout << "Locuri Libere: " << endl;
        for (const auto &etaj : locuriLibere)
        {
            for (const auto &loc : etaj.second)
            {
                cout << loc << endl;
            }
        }

        cout << "Locuri ocupate: " << endl;
        for (const auto &etaj : locuriOcupate)
        {
            for (const auto &loc : etaj.second)
            {
                cout << loc << endl;
            }
        }
    }
};

int main()
{
    Parcare p;

    p.adaugaLocLiber(1, "101");
    p.adaugaLocLiber(1, "102");
    p.adaugaLocLiber(2, "201");

    p.ocupaLoc(1, "102");

    try
    {
        auto locLiber = p.gasesteLocLiberPeEtaj(1);
        cout << "Loc liber gasit: " <<endl; 
        cout<< locLiber << endl;
        cout<<"----------------"<<endl;
    }
    catch (runtime_error &e)
    {
        cout << e.what() << endl;
    }

    p.afisareLocuri();


    return 0;
}