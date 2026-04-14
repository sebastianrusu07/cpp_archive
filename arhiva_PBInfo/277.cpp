#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int vector[n];
    for(int i=0;i<n;i++)
    {
        cin>>vector[i];
    }

    long long suma=0;
    for(int i=1;i<n-1;i++)
    {
        if (vector[i]>vector[i-1] && vector[i]>vector[i+1])
        {
            suma+=vector[i];
        }
    }
    cout<<suma;
    return 0;
}
