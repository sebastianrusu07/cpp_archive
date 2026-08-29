#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> numbers;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    sort(numbers.begin(), numbers.end());

    int half=n/2, sum=0;
    for (int i = 0; i < n; i++)
    {
        if (i<half)
        {
            sum-=numbers[i];
        }else
        {
            sum+=numbers[i];
        }
    }
    cout << sum;
    return 0;
}