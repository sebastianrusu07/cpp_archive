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
    getline(cin,n);

    int counter = 0;
    for(int i=0; i<n.length()-1; i++)
    {
        if (n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u')
        {
            if (n[i+1]=='a' || n[i+1]=='e' || n[i+1]=='i' || n[i+1]=='o' || n[i+1]=='u')
            {
                while (n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u')n.erase(i,1);
            }
        }
    }
    cout << n;
    return 0;
}