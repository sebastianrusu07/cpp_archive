#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

ifstream cin("sumpow2.in");
ofstream cout("sumpow2.out");

int main()
{
    string a, b;
    cin>>a>>b;

    string ans = a+b;
    sort(ans.begin(),ans.end());

    int idx=0;
    while (idx < ans.length()-1)
    {
        if (ans[idx]==ans[idx+1])
        {
            ans[idx]+=1;
            ans.erase(idx+1,1);
            idx=0;
            sort(ans.begin(),ans.end());
        }else
        {
            idx++;
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans;
    return 0;
}