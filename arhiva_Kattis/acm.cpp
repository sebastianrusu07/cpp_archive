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
    int time,totaltime=0,correct=0;
    unordered_map<char,int> penalties;
    while (cin >> time && time!=-1)
    {
        char c;
        string verdict;
        cin >> c >> verdict;
        if (verdict == "right")
        {
            correct++;
            totaltime+=penalties[c]+time;
        }else
        {
            penalties[c]+=20;
        }
    }
    cout << correct << ' ' << totaltime;
    return 0;
}