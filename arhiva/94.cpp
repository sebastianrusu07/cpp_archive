#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

int main()
{
    string n;
    cin >> n;
    for(int i=0; i<n.length(); i++)
    {
        if (n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u')
        {
            n.erase(i,1);
            i--;
        }
    }
    cout << n;
    return 0;
}