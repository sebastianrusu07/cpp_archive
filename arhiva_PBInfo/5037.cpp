#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <unordered_map>
#include <string>
#include <bitset>
#include <iomanip>
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        int num;
        cin >> num;

        if(num%2==0)
        {
            cout << num << ' ';
            return 0;
        }
    }
    cout << "IMPOSIBIL";
    return 0;
}