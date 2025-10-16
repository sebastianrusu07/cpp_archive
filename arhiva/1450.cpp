#include <fstream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

ifstream cin("memory003.in");
ofstream cout("memory003.out");

int main()
{
    int n,m,k;
    cin>>m>>n>>k;
    vector<long long> v(n);
    for(int i=0;i<n;i++)v[i]=1;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            int nr;
            cin>>nr;
            v[j]= (v[j] * nr) % k;
        }
    }
    int counter = 0;
    for (int i=0;i<n;i++)
    {
        if (v[i]%k==0)counter++;
    }
    cout<<counter;

    cin.close();
    cout.close();

    return 0;
}