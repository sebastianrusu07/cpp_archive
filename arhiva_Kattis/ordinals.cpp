#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> numbers;
    numbers.push_back("{}");
    for (int i=1;i<=8;i++)
    {
        string nr="";
        for (int j=0;j<i-1;j++)
        {
            nr+=numbers[j]+',';
        }
        nr+=numbers[i-1];
        nr='{' + nr + '}';
        numbers.push_back(nr);
    }

    cout << numbers[n];
    return 0;
}