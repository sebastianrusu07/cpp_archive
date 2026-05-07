#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i=0;i<t;i++){
        int n,freq[11]={0};
        cin >> n;
        for(int j=0;j<n;j++){
            int nr;
            cin >> nr;
            freq[nr]++;
        }
        int maxApp=0;
        for(int j=1;j<=10;j++){
            maxApp=max(maxApp,freq[j]);
        }
        cout << n-maxApp << '\n';
    }

    return 0;
}
