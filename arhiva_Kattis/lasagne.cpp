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
    int n;
    cin>>n;

    double celsius = round((n - 32) * 5.0/9);
    cout<<celsius;
    return 0;

}