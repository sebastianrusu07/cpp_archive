#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int minWins;
    cin>>minWins;

    string score;
    cin>>score;
    int hTotal=0,aTotal=0;
    int hTemp=0,aTemp=0;
    for(int i=0;i<score.length() && hTotal<minWins && aTotal<minWins;i++)
    {
        if (score[i]=='A')
        {
            aTemp++;
        }else
        {
            hTemp++;
        }

        if (hTemp==3)
        {
            hTotal++;
            hTemp=0;
            aTemp=0;
        }else
        {
            if (aTemp==3)
            {
                aTotal++;
                hTemp=0;
                aTemp=0;
            }
        }
    }
    if (hTotal<aTotal)
    {
        cout << "Hannes";
    }else
    {
        cout << "Arnar";
    }
    return 0;
}