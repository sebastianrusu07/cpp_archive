#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
using namespace std;
//
// ifstream cin("intervale4.in");
// ofstream cout("intervale4.out");

int main()
{
    int n;
    cin >> n;

    vector<int> A,B,C;
    for(int i=0;i<n;i++)
    {
        int val;
        cin >> val;
        A.push_back(val);
    }

    int target = 1;
    vector<string> operations;
    while (target <= n)
    {
        if (!A.empty() && A.back() == target)
        {
            A.pop_back();
            target++;
            operations.push_back( "A C");
        }else if (!B.empty() && B.back() == target)
        {
            B.pop_back();
            target++;
            operations.push_back("B C");
        }else if (!A.empty())
        {
            B.push_back(A.back());
            A.pop_back();
            operations.push_back("A B");
        }else
        {
            cout << 0;
            return 0;
        }
    }
    cout << operations.size() << '\n';
    for (auto it : operations)
    {
        cout << it << '\n';
    }
    return 0;
}