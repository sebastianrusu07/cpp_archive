#include <iostream>
using namespace std;

int main(){
    int hSpots[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            hSpots[i][j]=0;
        }
    }
    for(int i=0;i<9;i++){
        char mark;
        cin >> mark;
        if(mark=='O'){
            hSpots[i/3][i%3]=1;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(hSpots[i][j]!=1){
                break;
            }
            if(j==2){
                cout << "Jebb";
                return 0;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(hSpots[j][i]!=1){
                break;
            }
            if(j==2){
                cout << "Jebb";
                return 0;
            }
        }
    }

    for(int i=0;i<3;i++){
        if(hSpots[i][i]!=1){
            break;
        }
        if(i==2){
            cout << "Jebb";
            return 0;
        }
    }

    for(int i=0;i<3;i++){
        if(hSpots[i][2-i]!=1){
            break;
        }
        if(i==2){
            cout << "Jebb";
            return 0;
        }
    }
    cout << "Neibb";
}