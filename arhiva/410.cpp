#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int cmmdc(int a,int b)
{
    while (b)
    {
        int rest = a%b;
        a = b;
        b = rest;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;

    string s = to_string(n);
    string firstHalf = s.substr(0, s.length()/2);
    string secondHalf = s.substr(s.length()/2+(s.size()%2!=0), s.size());

    int intFirstHalf = stoi(firstHalf);
    int intSecondHalf = stoi(secondHalf);

    cout << cmmdc(intFirstHalf,intSecondHalf);
    return 0;
}