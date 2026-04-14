#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

ifstream cin("secvk.in");
ofstream cout("secvk.out");

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> sume;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int suma=0;
    for(int i = 0; i < k; i++)
    {
        suma+=v[i];
    }
    for(int i = k; i <= n; i++)
    {
        sume.push_back(suma);
        suma+=v[i];
        suma-=v[i-k];
    }
    int maxSuma = 0,index = 0;
    for (int i=0;i<sume.size();i++)
    {
        if(sume[i]>maxSuma)
        {
            maxSuma = sume[i];
            index = i;
        }
    }
    for(int i = index; i < index+k; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}