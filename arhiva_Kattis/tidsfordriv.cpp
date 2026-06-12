#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
using namespace std;

int freq[14];

int translate(string s)
{
    if (s=="A") return 1;
    if (s=="J") return 11;
    if (s=="Q") return 12;
    if (s=="K") return 13;
    return stoi(s);
}

int main()
{
    double cards=52,n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        string rank;
        cin >> rank;
        rank.pop_back();

        int intRank = translate(rank);
        freq[intRank]++;
    }

    double maxi=0;
    int pos=0;
    for(int i = 1; i <= 13; i++)
    {
        int amntOfCards=4-freq[i];
        if(amntOfCards>maxi)
        {
            maxi = amntOfCards;
            pos = i;
        }
    }

    cout << fixed << setprecision(4) << maxi/(cards-n);
    return 0;
}