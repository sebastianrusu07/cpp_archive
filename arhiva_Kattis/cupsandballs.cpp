#include <iostream>
using namespace std;

int main(){
    int guess,n;
    cin >> guess >> n;
    int cups[4]={-1,0,1,0};
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        swap(cups[x],cups[y]);
    }

    int pos=0;
    for(int i=1;i<=3;i++){
        if(cups[i]==1){
            pos=i;
            break;
        }
    }

    if(cups[guess]==1){
        if(guess==1){
            cout << "2 3";
            return 0;
        }
        if(guess==2){
            cout << "1 3";
            return 0;
        }
        if(guess==3){
            cout << "1 2";
            return 0;
        }
    }

    cout << pos << ' ' << guess;
    return 0;
}