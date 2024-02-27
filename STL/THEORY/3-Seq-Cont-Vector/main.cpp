// V E C T O R
#include <iostream>
#include <vector>
#include <algorithm>
#include <thread>
#include <chrono>
using namespace std;

class Person
{
    friend ostream &operator<<(ostream &os, const Person &p);
    string name;
    int age;

public:
    Person() = default;
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

// use for_each and a lambda expression to display vector elements
void display2(const vector<int> &vec)
{
    cout << "[";
    for_each(vec.begin(), vec.end(), [](int x)
             { cout << x << " "; });
    cout << "]" << endl;
}

// template function to display any vector
template <typename T>
void display(const vector<T> &vec)
{
    cout << "[";
    for (const auto &elem : vec)
    {
        cout << elem << " ";
    }
    cout << "]" << endl;
}

void test4()
{
    cout << "\nTEST4================================" << endl;
    vector<Person> stooges;

    Person p1{"Larry", 18};
    display(stooges);

    stooges.push_back(p1);
    display(stooges);

    stooges.push_back(Person{"Moe", 25});
    display(stooges);

    stooges.emplace_back("Curly", 30); // Use emplace_back!!!
    display(stooges);
}

void test9()
{
    cout << "\nTest9====================================" << endl;

    vector<int> vec1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> vec2{10, 20};

    display(vec1);
    display(vec2);

    copy(vec1.begin(), vec1.end(), back_inserter(vec2));
    display(vec1);
    display(vec2);
    cout << endl;

    // vec1 = {1,2,3,4,5,6,7,8,9,10};
    // vec2 = {10,20};
    // display(vec1);
    // display(vec2);

    // cout<<"========"<<endl;
    // copy_if(vec1.begin(), vec1.end(), back_inserter(vec2), [](int x){
    //     return x % 2 == 0;
    // });
    // display(vec1);
    // display(vec2);
}

void test10()
{
    cout << "\nTest10====================================" << endl;
    // transform over 2 ranges

    vector<int> vec1{1, 2, 3, 4, 5};
    vector<int> vec2{10, 20, 30, 40, 50};
    vector<int> vec3;

    // 1*10, 2*20, 3*30, 4*40 etc. and store the result in vec3
    transform(vec1.begin(), vec1.end(), vec2.begin(), back_inserter(vec3), [](int x, int y)
              { return x * y; });

    display(vec3);
}

void test11()
{
    cout << "\nTest11=================================" << endl;

    vector<int> vec1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> vec2{100, 200, 300, 400};

    display(vec1);
    display(vec2);
    cout << endl
         << endl;

    cout << "finding the number..." << endl;
    auto it = find(vec1.begin(), vec2.begin(), 5);

    if (it != vec1.end())
    {
        cout << "finded!" << endl;
        cout << "inserting..." << endl;
        cout << "please wait..." << endl;
        vec1.insert(it, vec2.begin(), vec2.end());
    }
    else
    {
        cout << "Sorry, " << *it << " not found" << endl;
    }
    display(vec1);
}

int main()
{

    // test4();
    // test9();
    // test10();

    chrono::seconds duration(3);
    this_thread::sleep_for(duration);
    test11();

    return 0;
}