#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    stack<int> stck;
    for(int i=0;i<n;i++)
    {
        string command;
        cin>>command;

        if (command=="push")
        {
            int nr;
            cin>>nr;
            stck.push(nr);
        }else if (command == "pop" && !stck.empty())
        {
            stck.pop();
        }else if (command == "top" && !stck.empty())
        {
            cout<<stck.top()<<'\n';
        }
    }
    return 0;
}