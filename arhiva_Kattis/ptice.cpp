#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    char adrian[3]={'C','A','B'};
    char bruno[4]={'C','B','A','B'};
    char goran[6]={'B','C','C','A','A','B'};

    int n;
    cin>>n;

    string s;
    cin>>s;
    s='X'+s;

    int adrianPoints=0,brunoPoints=0,goranPoints=0;
    for(int i=1;i<=n;i++)
    {
        char c = s[i];

        if (c==adrian[i%3]) adrianPoints++;
        if (c==bruno[i%4]) brunoPoints++;
        if (c==goran[i%6]) goranPoints++;
    }

    int maxPoints = max(adrianPoints,max(brunoPoints,goranPoints));
    cout<<maxPoints << endl;

    if (adrianPoints==maxPoints) cout << "Adrian\n";
    if (brunoPoints==maxPoints) cout << "Bruno\n";
    if (goranPoints==maxPoints) cout << "Goran\n";
    return 0;
}