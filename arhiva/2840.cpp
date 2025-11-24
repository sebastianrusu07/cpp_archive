#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

ifstream cin("inlocuirecuvant.in");
ofstream cout("inlocuirecuvant.out");

int main()
{
    int nr,maxL=0,l=1,culprit=0;;
    cin >> nr;
    int prev = nr;
    while(cin>>nr)
    {
        if (nr==prev)l++;
        if (prev!=nr)
        {
            l=1;
        }

        if (l>maxL)
        {
            maxL=l;
            culprit=nr;
        }
        if (l==maxL)culprit=max(culprit,prev);
        prev=nr;
    }
    cout << maxL << endl;
    for(int i=1;i<=maxL;i++)cout << culprit << " ";
    return 0;
}