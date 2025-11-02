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
        for(int j=0; j<n.length(); j++)
        {
            if(i!=j)cout << n[j];
        }
        cout << endl;
    }
    return 0;
}