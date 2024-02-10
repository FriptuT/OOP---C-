#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Cititor{
public:
    bool actiune;
    string nume;
    string carte;

};

int main()
{
    int nr;
    string nume,carte;
    bool actiune;
    ifstream inFile("input.txt");
    vector<Cititor> cititori;

    inFile >> nr;
    for (int i = 0; i < nr; i++)
    {
        inFile >> actiune >> nume >> carte;
        cititori.push_back({actiune, nume, carte});
    }
    
    for(auto &cititor : cititori){
        if (cititor.actiune == 1)
        {
            cout<<cititor.nume<<" a imprumutat "<<cititor.carte<<endl;
        }
        else
        {
            cout<<cititor.nume<<" a returnat "<<cititor.carte<<endl;
        }
        
    }


    return 0;
}