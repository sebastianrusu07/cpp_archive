#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <fstream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <thread>
#include <bitset>
using namespace std;

#define ll long long

ifstream cin("nrlipsa1.in");
ofstream cout("nrlipsa1.out");

bitset<100> set;

int main()
{
    int n;
    while (cin>>n && n!=-333)
    {
        if (n<100)
        {
            set[n]=true;
        }
    }

    int largest=0;
    for (int i=98;i>=10;i-=2)
    {
        if (set[i]==true) continue;
        largest=i;
        break;
    }

    int smallest=0;
    for (int i=10;i<=98;i+=2)
    {
        if (set[i]==true) continue;
        smallest=i;
        break;
    }
    if (smallest==0 || largest==0 || largest==smallest)
    {
        cout << "nu exista";
    }else
    {
        cout << smallest << " " << largest;
    }
    return 0;
}