#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <fstream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <thread>
using namespace std;

ifstream cin("catsfood.in");
ofstream cout("catsfood.out");

int a,b,c;

int likeMeter(int n)
{
    int cnt=0;
    string s = to_string(n);
    if (find(s.begin(),s.end(),a+'0')!=s.end())
    {
        cnt++;
    }
    if (find(s.begin(),s.end(),b+'0')!=s.end())
    {
        cnt++;
    }
    if (find(s.begin(),s.end(),c+'0')!=s.end())
    {
        cnt++;
    }
    return cnt;
}

int main() {
    cin>>a>>b>>c;

    int n;
    cin>>n;

    int least1=0,all3=0;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;

        int correctIngredients = likeMeter(nr);
        if (correctIngredients>0)
        {
            least1++;
        }
        if (correctIngredients==3)
        {
            all3++;
        }
    }

    cout << least1 << "\n" << (all3?"DA":"NU");
    return 0;
}