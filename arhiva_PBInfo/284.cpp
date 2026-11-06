#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

ifstream cin("interclasare3.in");
ofstream cout("interclasare3.out");

int main()
{
    int n,m;
    cin >> n >> m;

    int A[100005],B[100005];
    int trueN=0,trueM=0;
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        if (num%2==0)
        {
            A[trueN]=num;
            trueN++;
        }
    }

    for(int i=0;i<m;i++)
    {
        int num;
        cin >> num;
        if (num%2==0)
        {
            B[trueM]=num;
            trueM++;
        }
    }

    int idxA=0,idxB=trueM-1,i=1;
    for (; idxA<trueN && idxB>=0; i++)
    {
        if (A[idxA]<B[idxB])
        {
            cout << A[idxA] << ' ';
            idxA++;
        }else
        {
            cout << B[idxB] << ' ';
            idxB--;
        }
        if (i%20==0)
        {
            cout << '\n';
        }
    }
    i--;
    while (idxA<trueN)
    {
        cout << A[idxA] << ' ';
        idxA++;
        i++;
        if (i%20==0)
        {
            cout << '\n';
        }
    }
    while (idxB>=0)
    {
        cout << B[idxB] << ' ';
        idxB--;
        i++;
        if (i%20==0)
        {
            cout << '\n';
        }
    }
    return 0;
}