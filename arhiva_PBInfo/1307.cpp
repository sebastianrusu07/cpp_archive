#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <set>
using namespace std;


int n;
vector<int> nums;
set<int> factorsWithPowOne;

void read()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        nums.push_back(nr);
    }
}

bool isToThePowOfOne(int factor,int num)
{
    return ((num%factor==0) && (num/factor%factor!=0));
}

bool isPrime(int num)
{
    if (num == 1) return false;
    if (num == 2) return true;
    if (num%2 == 0) return false;
    for (int i = 3; i*i <= num; i += 2)
    {
        if (num%i == 0) return false;
    }
    return true;
}


void allFactorsToPowOfOneSmallerThan(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isToThePowOfOne(i,n) && isPrime(i))
        {
            factorsWithPowOne.insert(i);
        }
    }
}

void print()
{
    if (factorsWithPowOne.empty())
    {
        cout << "Sirul Y este vid.";
        return;
    }
    vector<int> sortedVector;
    for (int i : factorsWithPowOne)
    {
        sortedVector.push_back(i);
    }
    sort(sortedVector.begin(), sortedVector.end());

    for (int i = 0; i < sortedVector.size(); i++)
    {
        cout << sortedVector[i] << ' ';
    }
}


int main()
{
    read();
    for (int i=0;i<n;i++)
    {
        allFactorsToPowOfOneSmallerThan(nums[i]);
    }
    print();
    return 0;
}