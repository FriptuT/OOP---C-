#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void display(const deque<T> &d)
{
    cout << "[";
    for (const auto &elem : d)
    {
        cout << elem << " ";
    }
    cout << "]" << endl;
}

void test1()
{
    cout << "\nTest1=============================" << endl;

    deque<int> d{1, 2, 3, 4, 5};
    display(d);

    deque<int> d1(10, 100); // ten 100s in the deque
    display(d1);

    d[0] = 100;
    d.at(1) = 200;
    display(d);
}

void test2()
{
    // push and pops
    cout << "\nTest2============================" << endl;

    deque<int> d{0, 0, 0};
    display(d);

    d.push_back(10);
    d.push_back(20);
    display(d);

    d.push_front(100);
    d.push_front(200);
    display(d);

    cout << "Front: " << d.front() << endl;
    cout << "Back: " << d.back() << endl;
    cout << "Size: " << d.size() << endl;

    display(d);
}

void test3(){
    cout<<"\nTest3==============================="<<endl;
    // insert all even numbers into the back of a deque 
    // and all odd numbers into the front
    deque<int> vec{1,2,3,4,5,6,7,8,9,10};
    deque<int> e;

    for(auto &elem: vec){
        if (elem % 2 == 0)
            e.push_back(elem);
        else
            e.push_front(elem);
    }
    display(e);
}

void test4(){
    //push front vs back ordering
    cout<<"\nTest4================================"<<endl;
    
    deque<int> vec {1,2,3,4,5,6,7,8,9,10};
    deque<int> d;

    for(auto &elem:vec){
        d.push_front(elem);
    }
    display(d);
    d.clear();
    
    for(auto &elem:vec){
        d.push_back(elem);
    }
    display(d);
}

void test5(){
    cout<<"\nTest5==============================="<<endl;

    vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    deque<int> d;

    copy(vec.begin(),vec.end(), front_inserter(d));
    display(d);

    d.clear();

    copy(vec.begin(), vec.end(), back_inserter(d));
    display(d);
}

int main()
{

    // test1();
    // test3();
    test5();

    return 0;
}