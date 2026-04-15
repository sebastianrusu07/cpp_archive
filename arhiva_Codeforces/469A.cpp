#include <iostream>
#include <unordered_set>
using namespace std;

int freq[102];

int main()
{
    int p;
    cin>>p;

    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int nr;
        cin>>nr;
        freq[nr]=1;
    }

    int b;
    cin>>b;
    for(int i=0;i<b;i++)
    {
        int nr;
        cin>>nr;
        freq[nr]=1;
    }

    for(int i=1;i<=p;i++)
    {
        if (freq[i]==0)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}