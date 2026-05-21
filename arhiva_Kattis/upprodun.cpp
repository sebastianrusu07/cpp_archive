#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;

    int avg=k/n,len=k%n;
    for(int i=1;i<=len;i++)
    {
        for (int j=1;j<=avg+1;j++)
        {
            cout<<"*";
        }
        cout << '\n';
    }
    for(int i=1;i<=n-len;i++)
    {
        for (int j=1;j<=avg;j++)
        {
            cout<<"*";
        }
        cout << '\n';
    }

    return 0;
}