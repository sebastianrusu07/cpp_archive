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
    string n;
    cin >> n;

    for (int i=1; i<n.length(); i++)
    {
        if (n[i-1]=='2' && n[i]=='5')n[i]='6';
    }

    cout << n;
    return 0;
}