#include <fstream>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void addDivisors(int n,vector<int>& target)
{
    for (int i=2;i*i<=n;i++)
    {
        if (n%i==0)
        {
            target.push_back(i);
            if (i*i!=n)target.push_back(n/i);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> originalNumbers,auxiliaryNumbers;
    for (int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        addDivisors(num,auxiliaryNumbers);
        originalNumbers.push_back(num);
    }
    vector<int> all = auxiliaryNumbers;
    for (int i=0; i<n; i++){
        all.push_back(originalNumbers[i]);
    }
    sort(all.begin(),all.end());
    for (int num : all)
    {
        cout << num << ' ';
    }
    return 0;
}