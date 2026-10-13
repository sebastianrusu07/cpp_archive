#include <fstream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

ifstream cin("siruribinare.in");
ofstream cout("siruribinare.out");

int A[100005],B[100005];

int main()
{
    int n;
    cin>>n;

    cin >> A[0];
    for(int i=1;i<n;i++)
    {
        cin >> A[i];
        A[i]+=A[i-1];

    }

    cin >> B[0];
    for(int i=1;i<n;i++)
    {
        cin >> B[i];
        B[i]+=B[i-1];
    }

    unordered_map<int,int> firstApp;
    firstApp[0] = -1; // to count starting 0s
    int maxDist=0,a=0,b=0;
    for(int i=0;i<n;i++)
    {
        int diff = A[i]-B[i];
        if (firstApp.count(diff) == 0)
        {
            firstApp[diff] = i;
        }
        else
        {
            if (i-firstApp[diff] > maxDist)
            {
                maxDist = i-firstApp[diff];
                a = firstApp[diff]+2;
                b = i+1;
            }
        }
    }
    cout << a << ' ' << b;
    return 0;
}