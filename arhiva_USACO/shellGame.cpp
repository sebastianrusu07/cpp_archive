#include <fstream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

ifstream cin("shell.in");
ofstream cout("shell.out");

int main()
{
    int n;
    cin>>n;

    int startedIn1[4]={0,1,0,0};
    int startedIn2[4]={0,0,1,0};
    int startedIn3[4]={0,0,0,1};
    int scores1=0,scores2=0,scores3=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        swap(startedIn1[a],startedIn1[b]);
        swap(startedIn2[a],startedIn2[b]);
        swap(startedIn3[a],startedIn3[b]);

        int guess;
        cin>>guess;

        if (startedIn1[guess]==1) scores1++;
        if (startedIn2[guess]==1) scores2++;
        if (startedIn3[guess]==1) scores3++;
    }

    cout << max(scores1,max(scores2,scores3));

    cin.close();
    cout.close();
    return 0;
}