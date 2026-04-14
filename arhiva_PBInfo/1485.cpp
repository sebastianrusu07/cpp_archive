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

ifstream cin("jumatate1.in");
ofstream cout("jumatate1.out");

int cmmdc(int a,int b)
{
    while (b)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main()
{
    string n;
    cin>>n;

    string first = n.substr(0,n.size()/2);
    string second = n.substr(n.size()/2,(n.size()+1)/2);
    cout << cmmdc(stoi(first),stoi(second));
    return 0;
}