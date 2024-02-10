#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

class Persoana{
public:
    string nume;
    int cheltuieli;
};


int main()
{
    ifstream inFile("input.txt");
    vector<Persoana> persoane;

    int nr,cheltuieli;
    string nume;

    inFile >> nr;
    for (int i = 0; i < nr; i++)
    {
        inFile >>nume >>cheltuieli;
        persoane.push_back({nume, cheltuieli});
    }

    int sumaPetrecere = 0;
    int sumaDePlata;
    for(auto &persoana:persoane){
        sumaPetrecere += persoana.cheltuieli;
    }

    sumaDePlata = sumaPetrecere / persoane.size();
    cout<<sumaDePlata<<endl;

    for(auto &persoana:persoane){
        if (persoana.cheltuieli == sumaDePlata)
        {
            cout<<persoana.nume<<" a platit cat trebuie "<<endl;
        }
        else if(persoana.cheltuieli < sumaDePlata){
            cout<<persoana.nume<<" trebuie sa mai dea "<<sumaDePlata - persoana.cheltuieli<<endl;
        }
        else if(persoana.cheltuieli > sumaDePlata){
            cout<<persoana.nume<<" trebuie sa primeasca inapoi " << persoana.cheltuieli - sumaDePlata<<endl;
        }
        
    }
    




    return 0;
}