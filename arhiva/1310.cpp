#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int divi,nr;
    cin >> divi >> nr;

    vector<int> divizori;
    while (divi)
    {
        int c=divi%10;
        if (c!=0)
        {
            divizori.push_back(c);
        }
        divi/=10;
    }

    int counter=0;
    for (int i=0;i<divizori.size();i++)
    {
        int d=divizori[i];
        if (nr%d==0)
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}