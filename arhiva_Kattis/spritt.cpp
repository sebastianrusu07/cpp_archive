#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    for(int i=0;i<n;i++){
        int nr;
        cin >> nr;
        x-=nr;
    }
    if(x<0){
        cout << "Neibb";
    }else{
        cout << "Jebb";
    }
    return 0;
}