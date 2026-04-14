#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <thread>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1) return false;
    if ( n == 2 ) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i*i<=n; i += 2)
    {
        if (n % i == 0) return false;
    }
    return true;
}

int sumCif(int nr)
{
    int suma=0;
    while (nr != 0)
    {
        suma += nr%10;
        nr /= 10;
    }
    return suma;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }

    int steps=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if (isPrime(matrix[i][j]))
            {
                int oldj=j,oldi=i;
                if (i!=0) i--;
                if (j!=0) j--;
                matrix[oldi][oldj]=1;
                steps++;
            }else
            {
                if (isPrime(sumCif(matrix[i][j])))
                {
                    int oldj=j,oldi=i;
                    if (i!=n-1) i++;
                    if (j!=m-1) j++;
                    matrix[oldi][oldj]=1;
                    steps++;
                }
            }
            steps++;
        }
    }
    cout << steps;
    return 0;
}