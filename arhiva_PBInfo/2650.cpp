#include <fstream>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int numberStillInPile[200005];

int main()
{
    int n;
    cin >> n;

    vector<int> input;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        input.push_back(val);
        numberStillInPile[val] = 1;
    }

    stack<int> pile;
    for (int i = n-1; i >= 0; i--)
    {
        pile.push(input[i]);
    }

    for (int i=0;i<n;i++)
    {
        int target;
        cin >> target;

        if (!numberStillInPile[target])
        {
            cout << "0 ";
            continue;
        }

        int res = 1;
        while (!pile.empty() && pile.top() != target)
        {
            numberStillInPile[pile.top()]=0;
            pile.pop();
            res++;
        }
        pile.pop();
        cout << res << ' ';
    }
    return 0;
}