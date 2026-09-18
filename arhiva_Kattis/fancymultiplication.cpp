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

int main()

{
    long long a,b;
    cin >> a >> b;

    long long sum=0;
    for (int i=0;i<b;i++)
    {
        sum+=a;
    }
    cout<<sum;
    return 0;
}