#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <queue>
using namespace std;

struct customer
{
    int time,money;
};

int main()
{
    int people,timeLimit;
    cin >> people >> timeLimit;

    vector<customer> customers(people);
    for (int i=0;i<people;i++)
    {
        cin >> customers[i].money >> customers[i].time;
    }

    sort(customers.begin(),customers.end(),[](const customer& a, const customer& b)
    {
        return a.time < b.time;
    });

    priority_queue<int> richest;
    int index = people-1;
    long long sum=0;
    for (int currentStep=timeLimit-1;currentStep>=0;currentStep--)
    {
        for (;index>=0 && currentStep <= customers[index].time ;index--)
        {
            richest.push(customers[index].money);
        }
        if (!richest.empty())
        {
            sum+=richest.top();
            richest.pop();
        }
    }
    cout << sum << '\n';
    return 0;
}