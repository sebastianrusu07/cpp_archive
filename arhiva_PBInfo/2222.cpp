#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <algorithm>
using namespace std;

int nrZero(int nr)
{
    int counter=-1;
    while(nr)
    {
        nr/=10;
        counter++;
    }
    return counter;
}

int main()
{
    int nr,k;
    cin >> nr >> k;
    cout << "1";
    int counter = nrZero(nr);
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<counter;j++)
        {
            cout<<"0";
        }
    }
    return 0;
}