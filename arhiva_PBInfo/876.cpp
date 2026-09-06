#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <climits>
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    queue<int> q;
    for(int i=0;i<n;i++)
    {
        string command;
        cin>>command;

        if (command=="push")
        {
            int nr;
            cin>>nr;
            q.push(nr);
        }else if (command == "pop" && !q.empty())
        {
            q.pop();
        }else if (command == "front" && !q.empty())
        {
            cout<<q.front()<<'\n';
        }
    }
    return 0;
}