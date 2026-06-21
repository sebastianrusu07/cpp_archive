#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> numbers;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;
        numbers.push_back(nr);
    }

    sort(numbers.begin(),numbers.end(),greater<int>());

    int sumA=0,sumB=0;
    for(int i=0;i<n;i++)
    {
        if (i%2==0) sumA+=numbers[i];
        else sumB+=numbers[i];
    }

    cout<<sumA<<" "<<sumB;
    return 0;
}