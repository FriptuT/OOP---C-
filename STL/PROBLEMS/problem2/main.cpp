#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

class Contact
{
public:
    Contact(string nume, string nrTelefon) : nume(nume), nrTelefon(nrTelefon) {}

    string nume;
    string nrTelefon;
    bool operator<(const Contact &rhs) const
    {
        return this->nume < rhs.nume;
    }

    friend ostream &operator<<(ostream &os, const Contact &c)
    {
        os << "numele: " << c.nume << " si telefonul: " << c.nrTelefon;
        return os;
    }
};

class AgendaTelefonica
{
public:
    map<string, string> contacte;

    void adaugaContact(const Contact &contact)
    {
        contacte[contact.nume] = contact.nrTelefon;
    }

    void stergeContact(const string &nume)
    {
        contacte.erase(nume);
    }

    string cautaContact(const string &nume)
    {
        return contacte[nume];
    }

    void afiseazaContacte()
    {
        cout << "Contacte:\n";
        for (const auto &pair : contacte)
        {
            cout << pair.first << ":" << pair.second << "\n";
        }
    }
};

int main()
{
    Contact Teodor{"Friptu Teodor", "0777777777"};
    Contact Ana{"Friptu Ana", "0777777725"};
    Contact Tati{"Tati", "0777777799"};

    AgendaTelefonica agenda;

    agenda.adaugaContact(Teodor); 
    agenda.adaugaContact(Ana);    
    agenda.adaugaContact(Tati);    

    agenda.afiseazaContacte();

    cout<<"Nr de telefon al lui Tati este :"<< agenda.cautaContact("Tati")<<endl;
    cout<<"Nr de telefon al lui Ana este :"<< agenda.cautaContact("Friptu Ana")<<endl;
    cout<<"Nr de telefon al lui Teodor este :"<< agenda.cautaContact("Friptu Teodor")<<endl;

    agenda.stergeContact("Friptu Teodor"); 

    cout<<endl<<endl;
    agenda.afiseazaContacte();


    return 0;
}