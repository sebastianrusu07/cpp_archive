#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i=0;i<t;i++){
        int a,b,c;
        cin >> a >> b >> c;

        if(a>50){
            cout << "A\n";
            continue;
        }

        if(b>50){
            cout << "B\n";
            continue;
        }

        if(c>50){
            cout << "C\n";
            continue;
        }

        cout << "NOTA\n";
    }

}
