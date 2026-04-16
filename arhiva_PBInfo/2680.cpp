#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n >> ws;

    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        string newS;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!='.' && s[i]!='!' && s[i]!=',' && s[i]!='?'){
                newS+=s[i];
            }
        }
        newS+=s[s.size()-1];
        cout << newS << '\n';
    }
    return 0;
}
