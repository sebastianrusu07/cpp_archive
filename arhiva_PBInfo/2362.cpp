#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("balmascat.in");
ofstream cout("balmascat.out");

int main()
{
    int n,p;
    cin>>n>>p;

    int c = (n/p + (n%p!=0? 1 : 0))%10;
    int cp = (c==9 ? 8 : c+1);

    string repeat = to_string(cp) + to_string(c);
    string raspuns = "";
    for(int i=1; i<p; i++)
    {
        raspuns += repeat;
    }
    raspuns+=to_string(cp);
    cout<<raspuns;
    return 0;
}