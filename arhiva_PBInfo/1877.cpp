#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> positives, negatives;
    for (long long i = 0; i < n; i++)
    {
        long long num;
        cin >> num;

        if (num >= 0)
        {
            positives.push_back(num);
        }else
        {
            negatives.push_back(num);
        }
    }
    sort(positives.begin(), positives.end(), greater<long long>());
    sort(negatives.begin(), negatives.end(), greater<long long>());

    long long k;
    cin >> k;

    long long sum=0;
    for (long long i = 0; k && !negatives.empty(); i++)
    {
        sum -= negatives[negatives.size()-1];
        negatives.pop_back();
        k--;
    }
    for (long long i = 0; k && !positives.empty(); i++)
    {
        sum -= positives[positives.size()-1];
        positives.pop_back();
        k--;
    }

    for (long long num : positives)
    {
        sum += num;
    }
    for (long long num : negatives)
    {
        sum += num;
    }

    cout << sum;
    return 0;
}