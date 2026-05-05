#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        if(a%2==0){
            cout << "YES\n";
        }else{
            if(b%2==0){
                cout << "NO\n";
            }else{
                cout << "YES\n";
            }
        }
    }

    return 0;
}
