#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,k;
        cin >> n >> k;

        int rem=0,failIndex=-1;
        bool ok=true;
        for(int j=0;j<n;j++){
            int cal;
            cin >> cal;
            rem+=cal;
            rem-=k;
            if(rem<0 && ok==true){
                ok=false;
                failIndex=j;
            }
        }
        if(ok){
            cout << "YES\n";
        }else{
            cout << "NO " << failIndex+1 << '\n';
        }
    }
    return 0;
}
