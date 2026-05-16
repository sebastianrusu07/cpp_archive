#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int n;
    cin >> n >> ws;

    string s;
    getline(cin,s);

    char keyboard[26]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
    for(int i=0;i<n;i++)
    {
        if (s[i]==' ')
        {
            cout << ' ';
            continue;
        }
        cout << keyboard[s[i]-'a'];
    }
    return 0;
}