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

    vector<char> numbers;
    for(int i=0;i<n;i++)
    {
        char ans;
        cin>>ans;
        numbers.push_back(ans);
    }

    int cnt=0;
    for(int i=1;i<n;i++)
    {
        if (numbers[i]==numbers[i-1])
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}