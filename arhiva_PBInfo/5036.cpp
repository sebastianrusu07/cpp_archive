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

    int sum=0,evens=0;
    for(int i=1;i<=n;i++)
    {
        int grade;
        cin >> grade;

        sum += grade * (grade%2==0);
        evens += (grade%2==0);
    }
    cout << fixed << setprecision(2) << double(sum)/double(evens) << '\n';
    return 0;
}