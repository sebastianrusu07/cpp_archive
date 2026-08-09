#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;

ifstream cin("smartphone1.in");
ofstream cout("smartphone1.out");

string keypad = "123456789";

pair<int,int> coords(int digit) //anything but hard code it
{
    int linePos = keypad.find(digit+'0');
    int r = linePos/3, c = linePos%3;
    return make_pair(r,c);
}

bool isNeighbour(int a,int b)
{
    pair<int,int> one = coords(a), two = coords(b);
    return ((abs(one.first - two.first) <= 1 && abs(one.second - two.second) <= 1));
}

int main()
{
    int n;
    cin >> n;

    int possibleCodes = 0;
    for (int i = 0; i < n; i++)
    {
        int code;
        cin >> code;

        int last = code%10;
        code /= 10;

        int ok = 1;
        while (code>0)
        {
            int now = code%10;
            code /= 10;
            if (last == now || !isNeighbour(last,now))
            {
                ok = 0;
                break;
            }
            last = now;
        }
        possibleCodes+=ok;
    }
    cout << possibleCodes;
    return 0;
}