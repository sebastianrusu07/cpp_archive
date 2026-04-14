#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

ifstream cin("fibo0.in");
ofstream cout("fibo0.out");

int main()
{
    int k,nr,counter=0;
    while (cin>>k>>nr)
    {
        if (nr%k==0)
        {
            counter++;
        }
    }

    cout<<counter;
    return 0;
}