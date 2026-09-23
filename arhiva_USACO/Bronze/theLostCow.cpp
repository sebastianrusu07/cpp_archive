#include <fstream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

ifstream cin("lostcow.in");
ofstream cout("lostcow.out");

int main()
{
    int x,y;
    cin >> x >> y;


    int init=x,pastPos=x,nextLen=1,totalDist=0,moveCnt=0;
    while (true)
    {
        if (moveCnt%2==0)
        {
            x=init+nextLen;
        }else
        {
            x=init-nextLen;
        }

        if (pastPos<=y && x>y || pastPos>=y && x<y)
        {
            totalDist+=abs(pastPos-y);
            break;
        }
        totalDist+=abs(x-pastPos);
        pastPos=x;
        moveCnt++;
        nextLen*=2;
    }
    cout << totalDist;

    cin.close();
    cout.close();
    return 0;
}