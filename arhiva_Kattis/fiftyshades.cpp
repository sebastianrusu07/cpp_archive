#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        for (char &c : s)
        {
            c=tolower(c);
        }
        if (s.find("rose")!=string::npos || s.find("pink")!=string::npos) cnt++;
    }
    if (cnt==0) cout << "I must watch Star Wars with my daughter";
    else cout << cnt;
    return 0;
}