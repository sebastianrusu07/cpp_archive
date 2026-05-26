#include <iostream>
using namespace std;

int main(){
    int n,k,c;
    cin >> n >> k >> c ;

    int route1=0,route2=0;
    for(int i=0;i<c;i++){
        int pos;
        cin >> pos;
        if(pos<k){
            route1++;
        }else{
            route2++;
        }
    }
    cout << min(route1,route2);
    return 0;
}