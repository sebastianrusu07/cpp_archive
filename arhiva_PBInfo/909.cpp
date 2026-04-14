#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
#include <list>
using namespace std;

void perm(int &n)
{
    string s = to_string(n);
    char holdThatThought = s[0];
    for (int i = 0; i < s.length()-1; i++)
    {
        s[i]=s[i+1];
    }
    s[s.length()-1]=holdThatThought;
    n=stoi(s);
}