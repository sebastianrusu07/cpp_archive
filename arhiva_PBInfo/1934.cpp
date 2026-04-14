#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <fstream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("elfii.in");
ofstream cout("elfii.out");

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    int nr,cnt=0,magicNr=-1;
    nr = a*100+b*10+c;
    if (nr>99 && nr%2==0)
    {
        magicNr = max(magicNr,nr);
        cnt++;
    }

    nr = a*100+c*10+b;
    if (nr>99 && nr%2==0)
    {
        magicNr = max(magicNr,nr);
        cnt++;
    }

    nr = b*100+a*10+c;
    if (nr>99 && nr%2==0)
    {
        magicNr = max(magicNr,nr);
        cnt++;
    }

    nr = b*100+c*10+a;
    if (nr>99 && nr%2==0)
    {
        magicNr = max(magicNr,nr);
        cnt++;
    }

    nr = c*100+a*10+b;
    if (nr>99 && nr%2==0)
    {
        magicNr = max(magicNr,nr);
        cnt++;
    }

    nr = c*100+b*10+a;
    if (nr>99 && nr%2==0)
    {
        magicNr = max(magicNr,nr);
        cnt++;
    }

    if (magicNr!=-1) cout << cnt << '\n' << magicNr;
    else cout << "Poate data viitoare!";
    return 0;
}