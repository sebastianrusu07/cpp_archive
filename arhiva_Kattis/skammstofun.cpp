#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    string res;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if (isupper(s[0])) res+=s[0];
    }
    cout<<res;
    return 0;
}