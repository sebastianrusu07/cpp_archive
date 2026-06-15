#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n,m,d;
    cin >> m >> n >> d;

    int campX,campY;
    int jaguarX,jaguarY;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char c;
            cin >> c;

            if (c=='J')
            {
                jaguarX=j;
                jaguarY=i;
            }else if (c=='@')
            {
                campX=j;
                campY=i;
            }
        }
    }

    int dist=abs(jaguarX-campX)*abs(jaguarX-campX) + abs(jaguarY-campY)*abs(jaguarY-campY);
    d*=d;
    cout << (dist<=d?"the guide is right":"no jumpscares here");
    return 0;
}