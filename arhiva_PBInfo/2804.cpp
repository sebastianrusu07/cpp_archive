#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x%2==0){
            s+=s.substr(0,x);
        }else{
            string sub = s.substr(0,x);
            reverse(sub.begin(),sub.end());
            s+=sub;
        }
    }
    cout << s;
    return 0;
}
