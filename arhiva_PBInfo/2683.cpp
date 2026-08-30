#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void deletePositions(vector<int>& v,vector<int> positions)
{
    for(int i=positions.size()-1;i>=0;i--)
    {
        v.erase(v.begin()+positions[i]);
    }
}

void completeCycle(vector<int>& numbers)
{
    int lastNum = numbers.front();
    vector<int> markedPositions={0};

    int i=1;
    while(i<numbers.size())
    {
        if (numbers[i]>lastNum)
        {
            lastNum = numbers[i];
            markedPositions.push_back(i);
        }
        i++;
    }

    deletePositions(numbers,markedPositions);
}

int main()
{
    int n;
    cin>>n;

    vector<int> numbers;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        numbers.push_back(num);
    }

    int cycleCount=0;
    while (!numbers.empty())
    {
        completeCycle(numbers);
        cycleCount++;
    }
    cout<<cycleCount;
    return 0;
}