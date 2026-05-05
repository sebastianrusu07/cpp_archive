#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i=0;i<t;i++){
        int n;
        string s;
        cin >> n >> s;

        int offset=n%2;
        n-=offset;
        for(int j=0;j<n-1;j+=2){
            swap(s[j],s[j+1]);
        }
        n+=offset;

        for(int j=0;j<n;j++){
            int asci=s[j]-'a';
            char encdChar='z'-asci;
            s[j]=encdChar;
        }

        cout << s << '\n';
    }
    return 0;
}
