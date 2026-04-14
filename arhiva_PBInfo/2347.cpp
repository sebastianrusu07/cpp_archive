#include <algorithm>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

ifstream cin("furnici.in");
ofstream cout("furnici.out");


int numarDiv(int n)
{
    int suma=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            suma+=2;
        }
        if(i*i==n)
        {
            suma--;
        }
    }
    return suma;
}

int main() {
    int n;
    cin >> n;

    int divizori[n+1];

    for(int i=1;i<=n;i++)
    {
        int nr;
        cin >> nr;
        divizori[i]=numarDiv(nr);
    }
    int count = 0;
    bool flag = false;
    for(int i=2;i<=n;i++)
    {
        int last = divizori[i-1];
        int nr = divizori[i];
        if (nr<last && flag == false)
        {
            count++;
            flag = true;
        }
        if (nr>=last)
        {
            flag = false;
        }
    }
    cout << count;

    cin.close();
    cout.close();

    return 0;
}