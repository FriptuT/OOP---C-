#include <iostream>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

void display(const array<int,5> &arr){
    cout<<"[ ";
    for(const auto &i: arr)
        cout<<i<<" ";
    cout<<"]"<<endl;
}

void test1(){
    cout<<"\nTest1 ========================="<<endl;
    array<int,5> arr1{1,2,3,4,5};
    array<int,5> arr2;

    display(arr1);
    display(arr2);          // Elements are not initialized(contain 'garbage')

    arr2 = {10,20,30,40,50};

    display(arr1);
    display(arr2);

    cout<<"\nSize of arr1 is: "<<arr1.size()<<endl;         //5
    cout<<"\nSize of arr2 is: "<<arr2.size()<<endl;         //5

    arr1[0] = 1000;
    arr1.at(1) = 2000;
    display(arr1);

    cout<<"Front of arr2: "<<arr2.front()<<endl;        // 10
    cout<<"Back of arr2: "<<arr2.back()<<endl;          // 50
}

void test2(){
    cout<<"\nTEST3=================================="<<endl;

    array<int,5> arr1{1,2,3,4,5};

    int *ptr = arr1.data();
    cout<<ptr<<endl;
    *ptr = 10000;

    display(arr1);
}

void test4(){
    cout<<"\nTest4====================================="<<endl;

    array<int,5> arr1{2,1,4,5,3};
    display(arr1);

    sort(arr1.begin(), arr1.end());
    display(arr1);
}


void test5(){
    cout<<"\nTest5==========================="<<endl;

    array<int,5> arr1{2,4,1,3,5};

    auto min_num = min_element(arr1.begin(),arr1.end());
    auto max_num = max_element(arr1.begin(), arr1.end());

    cout<<"min: "<<*min_num<<", max: "<<*max_num<<endl;
}

void test6(){
    cout<<"\nTest6==============================="<<endl;

    array<int, 6>arr1 {2,1,3,3,4,5};

    auto adjacent = adjacent_find(arr1.begin(), arr1.end());
    if (adjacent != arr1.end())
    {
        cout<<"Adjacent element found with value : "<< *adjacent<<endl;
    }
    else
    {
        cout<<"No adjacent elements found"<<endl;
    }

}

void test7(){
    cout<<"\nTest7=============================="<<endl;

    //accumulate is from #include <numeric>
    array<int,5> arr1 {1,2,3,4,5};

    int sum = accumulate(arr1.begin(), arr1.end(), 0);
    cout<<"Sum of the elements in arr1 is: "<<sum<<endl;
}

void test9(){
    //count how many numbers are between 10 and 20;
    cout<<"\nTEST9================================="<<endl;
    array<int,10> arr1 {1,2,3,50,60,70,80,200,300,400};

    int how_many = count_if(arr1.begin(), arr1.end(), [](int x){
        return x > 10 && x < 200;
    });

    cout<<how_many<<" numbers are between 10 and 200"<<endl;
}

int main()
{
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    // test6();
    // test7();
    // test8();
    test9();


}