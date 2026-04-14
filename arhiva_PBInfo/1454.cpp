#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <fstream>
#include <thread>
#include <cctype>
using namespace std;

ifstream cin("permutarecuvant.in");
ofstream cout("permutarecuvant.out");

void nextPermutation(string &s)
{
    s+=s[0];
    s.erase(0,1);
}

int main()
{
    string word;
    cin>>word;

    for (int i=0;i<word.length();i++)
    {
        cout << word << " ";
        nextPermutation(word);
    }
    return 0;
}