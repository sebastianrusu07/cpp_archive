#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <unordered_map>
using namespace std;
int main()
{
    int c,p;
    cin >> c >> p;
    if (c>p)
    {
        cout << c-p;
    }else
    {
        int mare = p/c;
        if (p%c!=0)mare++;
        cout << mare << " " << (p%c==0?c:p%c);
    }

    return 0;
}