#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=0;i<t;i++)
    {
        int n;
        string s;
        cin >> n >> s;
        if (n%2!=0)
        {
            cout << "NO\n";
            continue;
        }

        int freq[2]={0,0};
        for (int j=0;j<s.length();j++)
        {
            if (s[j]=='(') freq[0]++;
            else freq[1]++;
        }

        if (freq[0]!=freq[1])
        {
            cout << "NO\n";
        }else
        {
            cout << "YES\n";
        }
    }
    return 0;
}