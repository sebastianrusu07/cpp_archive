#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

ifstream cin("coada1.in");
ofstream cout("coada1.out");

vector<int> q;

int query(int x)
{
    for (int i=0; i<q.size(); i++)
    {
        if (q[i]==x) return i+1;
    }
    return -1;
}

void push(int x)
{
    int p = query(x);
    if (p==-1)
    {
        q.push_back(x);
        return;
    }
    q.erase(q.begin(),q.begin()+p);
    q.push_back(x);
}

int main()
{
    int n;
    cin>>n;

    for (int i=0; i<n; i++)
    {
        string command;
        int x;
        cin>>command>>x;
        if (command=="push")
        {
            push(x);
        }else
        {
            cout<<query(x)<<'\n';
        }
    }
}