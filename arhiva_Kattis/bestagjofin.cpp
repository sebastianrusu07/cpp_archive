#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    int top=-1;
    string best;
    for(int i=0;i<n;i++){
        int score;
        string name;

        cin >> name >> score;

        if(score>top){
            top = score;
            best = name;
        }
    }
    cout << best;
    return 0;
}