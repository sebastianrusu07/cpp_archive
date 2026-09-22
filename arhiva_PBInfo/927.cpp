#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <string>
#include <bitset>
#include <set>
using namespace std;

ifstream cin("distantapuncte.in");
ofstream cout("distantapuncte.out");

int main()
{
    int ax,ay,bx,by;
    cin >> ax >> ay >> bx >> by;

    int x=abs(bx-ax),y=abs(by-ay);
    cout << x*x + y*y;
    return 0;
}