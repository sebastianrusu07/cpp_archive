#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

/*const string file_name("main");

ifstream in(file_name + ".in");
ofstream out(file_name + ".out");

#define cin in
#define cout out*/

int isPrime(int n)
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

    return suma==2 ? 1 : 0;
}

int main()
{
    int a,b;
    cin >> a >> b;
    int matrice[a+5][b+5];
    for(int i=0;i<a;i++)
    {
        for(int y=0;y<b;y++)
        {
            cin >> matrice[i][y];
        }
    }
    int suma=0;
    for(int i=1;i<a;i+=2)
    {

        for(int y=0;y<b;y++)
        {
            int nr=matrice[i][y];
            if(isPrime(nr))
            {
                suma++;
            }
        }
    }
    cout << suma;
    return 0;
}