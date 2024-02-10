#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Client
{
public:
    string numeClient;
    int valoareAchizitii;
};

int main()
{
    int valoareAchizitii, nr;
    string numeClient;
    ifstream inFile("input.txt");
    vector<Client> clienti;

    inFile >> nr;
    for (int i = 0; i < nr; i++)
    {
        inFile >> numeClient >> valoareAchizitii;
        clienti.push_back({numeClient, valoareAchizitii});
    }

    for (auto &client : clienti)
    {
        cout << client.numeClient << " " << endl;
    }

    int puncte = 10;
    int valoare;
    for (auto &client : clienti)
    {
        valoare = client.valoareAchizitii / 50;
        puncte *= valoare;
        cout<<client.numeClient<<" primeste "<<puncte<<" puncte"<<endl;
        puncte = 10;
    }

    return 0;
}