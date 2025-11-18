#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int h,l;
    char c;
    cin >> h >> l >> c;

    vector<int> numbers;
    for (int i = 0; i < h*l; i++)
    {
        int nr;
        cin >> nr;
        numbers.push_back(nr);
    }

    if (c=='+')sort(numbers.begin(),numbers.end());
    else sort(numbers.begin(),numbers.end(),greater<int>());

    for (int i = 0;i < h;i++)
    {
        for (int j = 0;j < l;j++)
        {
            cout << numbers[l*i+j] << " ";
        }
        cout << endl;
    }
    return 0;
}