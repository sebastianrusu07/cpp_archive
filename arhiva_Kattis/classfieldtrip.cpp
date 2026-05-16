#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    string a,b;
    cin >> a >> b;

    string s=a+b;
    sort(s.begin(),s.end());

    cout << s;
    return 0;
}