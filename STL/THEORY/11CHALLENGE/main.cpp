#include <iostream>
#include <stack>
#include <queue>
#include <iomanip>
#include <algorithm>
using namespace std;

template <typename T>
void display(queue<T> q)
{
    cout << "[";
    while (!q.empty())
    {
        T el = q.front();
        q.pop();
        cout << el << " ";
    }
    cout << "]" << endl;
}

bool is_palindrome(const string &s)
{

    queue<char> qiu;
    stack<char> stk;

    for (auto &c : s)
    {
        if (isalpha(c))
        {
            qiu.push(toupper(c));
            stk.push(toupper(c));
        }
    }

    char c1{};
    char c2{};

    while (!stk.empty())
    {
        c1 = stk.top();
        c2 = qiu.front();
        stk.pop();
        qiu.pop();
        if (c1 != c2)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<string> test_strings{"a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana", "avid diva",
                                "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++", "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!",
                                "This is a palindrome", "palindrome"};

    cout << boolalpha;
    cout << setw(8) << left << "Result"
         << "String" << endl;

    for (const auto &s : test_strings)
    {
        cout << setw(8) << left << is_palindrome(s) << s << endl;
    }

    return 0;
}