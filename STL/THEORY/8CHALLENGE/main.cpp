#include <iostream>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

void display_words_p1(const map<string, int> &words)
{
    cout << setw(12) << left << "\nWord" << setw(7) << right << "Count" << endl;
    cout << "=======================================" << endl;
    for (auto pair : words)
    {
        cout << setw(12) << left << pair.first << setw(7) << right << pair.second << endl;
    }
}

void display_words_p2(const map<string, set<int>> &words)
{
    cout << setw(12) << left << "\nWord Occurences" << endl;
    cout << "=======================================" << endl;
    for (auto pair : words)
    {
        cout << setw(12) << left << pair.first << left << "[ ";
        for (auto i : pair.second)
        {
            cout << i << " ";
        }
        cout << "]" << endl;
    }
}

string clean_string(const string &s)
{
    string result;
    for (char c : s)
    {
        if (c == '.' || c == ',' || c == ';' || c == ':')
        {
            continue;
        }
        else
        {
            result += c;
        }
    }
    return result;
}

void part1()
{
    map<string, int> words;
    string line;
    string word;
    ifstream inFile("words.txt");

    if (inFile)
    {
        while (getline(inFile, line))
        {
            stringstream ss(line);
            while (ss >> word)
            {
                word = clean_string(word);
                words[word]++; // increment the count for the word in the map
            }
        }
        inFile.close();
        display_words_p1(words);
    }
    else
    {
        cerr << "Error opening input file" << endl;
    }
}

void part2()
{
    map<string, set<int>> words;
    string line;
    string word;
    ifstream inFile("words.txt");

    if (inFile)
    {
        int line_number = 0;
        while (getline(inFile, line))
        {
            line_number++;
            stringstream ss(line);
            while (ss >> word)
            {
                word = clean_string(word);
                words[word].insert(line_number);
            }
        }

        inFile.close();
        display_words_p2(words);
    }
    else
    {
        cerr << "Error opening input file" << endl;
    }
}

int main()
{

    // part1();
    part2();

    return 0;
}