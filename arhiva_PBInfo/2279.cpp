#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int nrProblems,participants;
        cin>>nrProblems>>participants;

        int easy=0,hard=0;
        for (int y=0;y<nrProblems;y++)
        {
            int score;
            cin>>score;
            if (score<=participants/10)hard++;
            if (score>=participants/2)easy++;
        }
        if (easy==1 && hard==2)cout << "da\n";
        else cout << "nu\n";
    }
    return 0;
}