#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <iostream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long nr;
        cin>>nr;
        while (nr%2==0)
        {
            nr=nr/2;
        }
        cout<<nr<<' ';
    }
    return 0;
}