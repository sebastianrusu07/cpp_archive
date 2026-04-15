#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;

    string result;
    for(int i=0;i<a.length();i++)
    {
        char c;
        if (a[i]==b[i])
        {
            c='0';
        }else
        {
            c='1';
        }
        result.push_back(c);
    }
    cout << result;
    return 0;
}