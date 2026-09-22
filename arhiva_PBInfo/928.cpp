#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <string>
#include <bitset>
#include <fstream>
#include <set>
#include <iomanip>
using namespace std;

ifstream cin("ariatriunghi.in");
ofstream cout("ariatriunghi.out");

int main()
{
    double ax,ay,bx,by,cx,cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    double ab = sqrt(abs(by-ay)*abs(by-ay) + abs(bx-ax)*abs(bx-ax));
    double ac = sqrt(abs(cy-ay)*abs(cy-ay) + abs(cx-ax)*abs(cx-ax));
    double bc = sqrt(abs(cy-by)*abs(cy-by) + abs(cx-bx)*abs(cx-bx));

    double p = (ab+ac+bc)/2;
    double s = sqrt(p*(p-ab)*(p-ac)*(p-bc));

    cout << fixed << setprecision(1) << s;
    return 0;
}