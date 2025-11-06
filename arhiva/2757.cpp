#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

int main()
{
    string cacophony = "";
    for (int i=100;i<=999;i++)
    {
        cacophony += to_string(i);
    }

    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        cout << cacophony[k-1]<<" ";
    }
    return 0;
}
