#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <set>
using namespace std;

int theNotBuiltInMaxFunction(int a,int b)
{
    return a>b?a:b;
}

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    cout << theNotBuiltInMaxFunction(a,theNotBuiltInMaxFunction(b,c));
    return 0;
}