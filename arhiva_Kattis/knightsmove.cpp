#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    string pos;
    cin >> pos;

    int x,y;
    x=pos[0]-'a';
    y=pos[1]-'1';

    vector<int> deltaX={-2,-2,-1,-1,1,1,2,2};
    vector<int> deltaY={-1,1,-2,2,-2,2,-1,1};

    for (int i=0;i<deltaX.size();i++)
    {
        int posX=x+deltaX[i];
        int posY=y+deltaY[i];
        if (posX>=0 && posX<=7 && posY>=0 && posY<=7)
        {
            cout << char('a'+posX) << posY+1 << '\n';
        }
    }
    return 0;
}