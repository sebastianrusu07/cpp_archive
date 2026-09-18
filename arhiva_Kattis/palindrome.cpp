#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <set>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string rev = s;
    reverse(s.begin(),s.end());

    cout << (s==rev?"Palindrome!":"Nothing special about this string :(");
    return 0;
}