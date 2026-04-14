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

ifstream cin("zone.in");
ofstream cout("zone.out");

int main()
{
    int n;
    cin >> n;

    vector<int> first;
    vector<int> second;
    vector<int> third;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int nr;cin>>nr;
            if (i == 1)first.push_back(nr);
            else if (i == 2)second.push_back(nr);
            else if (i == 3)third.push_back(nr);
        }
    }
    int indexImpar=n-1;
    for (int i = 0; i < n; i++)
    {
        if (first[i]%2==0)
        {
            if (indexImpar>-1)
            {
                bool flag = false;
                while(third[indexImpar]%2==0)
                {
                    indexImpar--;
                    if (indexImpar==-1)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)break;
                swap(first[i],third[indexImpar]);
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)cout << first[i] << " ";
    for (int i = 0; i < n; i++)cout << second[i] << " ";
    for (int i = 0; i < n; i++)cout << third[i] << " ";
    return 0;
}