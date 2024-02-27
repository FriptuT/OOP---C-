#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

void display(const map<string, set<int>> &m){
    cout<<"[";
    for(const auto &elem: m){
        cout<<elem.first<<":[";
        for(const auto &set_elem: elem.second){
            cout<<set_elem<<" ";
        }
        cout<<"]";
    }
    cout<<"] "<<endl;
}

template <typename T1, typename T2>
void display(const map<T1,T2> &l){
    cout<<"[";
    for(const auto& elem: l){
        cout<<elem.first<<":"<<elem.second<<" ";
    }
    cout<<"] "<<endl;
}


void test1(){
    // MAPS
    cout<<"\nTest1================================="<<endl;
    map<string, int> m{
        {"Teodor",1},
        {"Gabi",2},
        {"Emil",3}
    };
    display(m);

    m.insert(pair<string,int>("Anna", 10));
    display(m);

    m.insert(make_pair("Ionut",5));
    display(m);

    m.insert(make_pair("Bogdan",15));
    display(m);

    m["Frank"] = 17;
    display(m);

    m["Frank"] += 10;
    display(m);

    m.erase("Frank");
    display(m);

    cout<<"Count for TEODOR: "<<m.count("Teodor") << endl;
    cout<<"Count for Frank: "<<m.count("Frank") << endl;


    auto it = m.find("Teodor");
    if (it != m.end())
    {
        cout<<"Found: "<<it->first<<":"<<it->second<<endl;
    }

    m.clear();

    display(m);
}

void test2(){
    cout<<"\nTest2=================================="<<endl;

    map<string,set<int>> grades {
        {"Teodor", {100,90} },
        {"Ariana", {94} },
        {"Ana", {80,90,100} }
    };
    
    display(grades);

    grades["Teodor"].insert(200);
    display(grades);

    auto it = grades.find("Ana");
    if (it != grades.end())
    {
        it->second.insert(1000);
    }
    display(grades);
}



int main(){

    // test1();
    test2();




    return 0;
}