#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n >> ws;

    for(int i=0;i<n;i++)
    {
        string s;
        getline(cin,s);
        s[0]=toupper(s[0]);
        for(int j=1;j<s.length();j++)
        {
            if (!isalpha(s[j])) continue;
            s[j]=tolower(s[j]);
        }
        cout << s << '\n';
    }
    return 0;
}