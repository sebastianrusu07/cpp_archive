#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    string res;
    res+=s[0];
    for(int i=1;i<s.length();i++)
    {
        if (s[i]==s[i-1]) continue;
        res+=s[i];
    }
    cout<<res;
    return 0;
}