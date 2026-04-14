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

int main()
{
    string nr;
    cin >> nr;

    string ogl=nr;
    reverse(ogl.begin(), ogl.end());
    cout << (ogl==nr?"DA":"NU");
    return 0;
}