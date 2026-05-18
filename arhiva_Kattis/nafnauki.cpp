#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string s;
    cin >> s;

    string res;
    for(int i=s.size()-1;i>=0 && s[i+1]!='.';i--)
    {
        res+=s[i];
    }
    reverse(res.begin(),res.end());
    cout << res;
    return 0;
}