#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <climits>
#include <queue>
#include <algorithm>
#include <set>
#include <ctime>
using namespace std;

int main()
{
    int remMoves; // remainingMoves and not rapidEyeMovementMoves
    cin>>remMoves;

    string sequence;
    cin>>sequence;

    string bestRoute;
    while(remMoves)
    {
        int firstRed=-1,firstGreen=-1,firstBlue=-1;
        int cnt=0;
        while ((firstRed==-1 || firstGreen==-1 || firstBlue==-1) && cnt<sequence.length())
        {
            if (firstRed==-1 && sequence[cnt]=='R') firstRed = cnt;
            if (firstGreen==-1 && sequence[cnt]=='G') firstGreen = cnt;
            if (firstBlue==-1 && sequence[cnt]=='B') firstBlue = cnt;
            cnt++;
        }

        if (firstRed > firstGreen && firstRed > firstBlue)
        {
            bestRoute+='R';
            sequence.erase(0,firstRed+1);
        }else if (firstGreen > firstRed && firstGreen > firstBlue)
        {
            bestRoute+='G';
            sequence.erase(0,firstGreen+1);
        }else if (firstBlue > firstRed && firstBlue > firstGreen)
        {
            bestRoute+='B';
            sequence.erase(0,firstBlue+1);
        }
        remMoves--;
    }
    cout<<bestRoute;
    return 0;
}