#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;

    int i=0;
    for(;s[i]!='a'; i++){}
    cout << s.substr(i);
    return 0;
}