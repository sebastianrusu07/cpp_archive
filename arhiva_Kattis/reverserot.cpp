#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";

int main()
{
    int n;
    string s;
    while(cin>>n>>s && n!=0)
    {
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            int pos = alphabet.find(s[i]);
            s[i]=alphabet[(pos + n) %28];
        }
        cout<<s << endl;
    }
    return 0;
}