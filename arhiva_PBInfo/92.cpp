#include <cmath>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

ifstream cin("proiecte.in");
ofstream cout("proiecte.out");

int main()
{
    int n;
    cin >> n;

    vector<pair<int,int>> numbers;
    for(int i=0; i<n; i++)
    {
        int nr;
        cin >> nr;
        numbers.push_back(make_pair(nr,i));
    }

    sort(numbers.begin(),numbers.end());

    for(int i=0; i<n; i++)
    {
        cout << numbers[i].second+1 << " ";
    }
    return 0;
}