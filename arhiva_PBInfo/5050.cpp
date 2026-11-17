#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

ifstream cin("jumps.in");
ofstream cout("jumps.out");

int main()
{
    vector<int> numbers;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        numbers.push_back(num);
    }
    sort(numbers.begin(),numbers.begin()+n,greater<int>());
    int steps=0;
    for (;!numbers.empty();++steps)
    {
        int limit = numbers.back()+k;
        while (!numbers.empty() && numbers.back()<=limit)
        {
            numbers.pop_back();
        }
    }
    cout << steps;
    return 0;
}