#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        unordered_map<int,int> map;
        bool ok=true;
        for(int i=0;i<2*n;i++){
            int nr;
            cin >> nr;
            map[nr]++;
            if(map[nr]>2){
                ok=false;
            }
        }
        cout << (ok==true?"Yes":"No") << '\n';
    }
    return 0;
}
