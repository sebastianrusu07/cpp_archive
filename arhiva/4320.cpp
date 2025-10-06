#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <unordered_set>
using namespace std;

string associate(int n)
{
    string associateNr = "";
    while (n)
    {
        int c = n % 10;
        char C = c+'0';
        if (c % 2 == 0)
        {
            associateNr.insert(associateNr.begin(), C);
        }
        n /= 10;
    }
    if (associateNr.empty()) return "0";
    return associateNr;
}

int main()
{
    int n;
    cin >> n;
    int biggestA=0,biggestNr=0;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        int asociat = stoi(associate(nr));
        if (asociat > biggestA)
        {
            biggestA = asociat;
            biggestNr = nr;
        }
        if (asociat == biggestA)
        {
            biggestNr = max(biggestNr, nr);
        }
    }
    cout << biggestNr;
    return 0;
}