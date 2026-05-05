#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i=0;i<t;i++){
        string a,b;
        cin >> a >> b;

        int unknown=0;
        int knownDiffs=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='?' || b[i]=='?'){
                unknown++;
            }else{
                if(a[i]!=b[i]){
                    knownDiffs++;
                }
            }
        }
        cout << knownDiffs << ' ' << knownDiffs+unknown << '\n';
    }
    return 0;
}
