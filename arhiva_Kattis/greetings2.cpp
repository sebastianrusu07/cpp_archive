#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    string greet;
    cin>>greet;

    int length=(greet.length()-2)*2;
    string ans=string(length,'e');
    cout << 'h' << ans << 'y';
    return 0;
}