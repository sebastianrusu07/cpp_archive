#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int nr;
        cin>>nr;
        cout << nr/400 + (nr%400!=0) << '\n';
    }
    return 0;
}