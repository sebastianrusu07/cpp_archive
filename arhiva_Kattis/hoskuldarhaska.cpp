#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<vector<string>> list;
int n;

void generate(int level,string sentence)
{
    if (level==n)
    {
        cout << sentence << '\n';
        return;
    }
    for (string word : list[level])
    {
        generate(level+1,sentence+" "+word);
    }
}

int main()
{
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int cnt;
        cin>>cnt;

        vector<string> row;
        for(int j=0;j<cnt;j++)
        {
            string s;
            cin>>s;
            row.push_back(s);
        }
        sort(row.begin(),row.end());
        list.push_back(row);
    }

    generate(0,"");
    return 0;
}