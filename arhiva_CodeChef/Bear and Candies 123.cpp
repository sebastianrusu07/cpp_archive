#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int a,b;
        cin >> a >> b;

        int limak=1,bob=2;
        while(true){
            a-=limak;
            limak+=2;
            if(a<0) break;
            b-=bob;
            bob+=2;
            if(b<0) break;
        }
        if(b<0){
            cout << "Limak\n";
        }else{
            cout << "Bob\n";
        }
    }
}
