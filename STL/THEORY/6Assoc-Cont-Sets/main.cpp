#include <iostream>
#include <set>
using namespace std;

class Person
{
    friend ostream &operator<<(ostream &os, const Person &p);

public:
    string name;
    int age;
    Person() : name{"Unknown"}, age{0} {}
    Person(string name, int age) : name(name), age(age) {}

    bool operator<(const Person &rhs) const
    {
        return this->age < rhs.age;
    }
    bool operator==(const Person &rhs) const
    {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

ostream &operator<<(ostream &os, const Person &p)
{
    os << p.name << ":" << p.age;
    return os;
}

template <typename T>
void display(const set<T> &l){
    cout<<"[";
    for(auto &elem: l){
        cout<<elem<<" ";
    }
    cout<<"]"<<endl;
}

void test1(){
    //Sets
    cout<<"\nTest1===================================="<<endl;
    set<int> s1{1,4,3,5,2};
    display(s1);

    s1 = {1,2,3,1,1,2,2,3,3,4,5};
    display(s1);

    s1.insert(0);
    s1.insert(10);
    
    display(s1);

    if (s1.count(10))
        cout<<"10 is in the set"<<endl;
    else
        cout<<"10 is NOT in the set"<<endl;

    auto it = s1.find(5);
    if (it != s1.end())
    {
        cout<<"Found: "<<*it<<endl;
    }
        
    s1.clear();
    
    display(s1);
}

void test2(){
    cout<<"\nTest2========================================"<<endl;

    set<Person> nerds {
        {"Teo", 1},
        {"Vasile", 2},
        {"Teodor", 3}
    };

    display(nerds);

    nerds.emplace("James", 50);
    display(nerds);

    nerds.emplace("Tudor", 50);         // 50 allready
    display(nerds);

    auto it = nerds.find(Person{"Vasile",2});
    if (it != nerds.end())
    {
        nerds.erase(it);
    }
    
    display(nerds);

    it = nerds.find(Person{"X", 50}); //  uses operator < which operates after age,
    // so it will delete object James with age = 50;
    if (it != nerds.end())
        nerds.erase(it);


    display(nerds);
}

void test3(){
    cout<<"\nTest3================================"<<endl;

    set<string> s {"A", "B", "C"};
    display(s);

    auto result = s.insert("D");
    display(s);

    cout<<boolalpha;
    cout<<"First:"<<*(result.first)<<endl;
    cout<<"Second:"<<result.second<<endl;
    cout<<endl;

    result = s.insert("A");
    display(s);

    cout<<boolalpha;
    cout<<"First:"<<*(result.first)<<endl;
    cout<<"Second:"<<result.second<<endl;
}



int main()
{
    // test1();
    // test2();
    test3();

    return 0;
}