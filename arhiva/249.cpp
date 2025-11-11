#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
using namespace std;

ifstream cin("pozitiex.in");
ofstream cout("pozitiex.out");

int main()
{
    int target,n;
    cin>>target>>n;

    vector<int> numbers(n);
    for(int i=0;i<n;i++)cin >> numbers[i];

    sort(numbers.begin(),numbers.end());

    for(int i=0;i<n;i++)
    {
        if(numbers[i]==target)
        {
            cout << i+1;
            return 0;
        }
    }
    cout << "NU EXISTA";
    return 0;
}