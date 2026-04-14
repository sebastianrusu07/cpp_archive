#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    string n;
    cin>>n;
    int mic = INT_MAX,mare = INT_MIN;
    for(int i=0;i<n.length();i++)
    {
        int c = n[i]-'0';
        if (c%2==0)
        {
            mic=min(mic,c);
        }else
        {
            mare=max(mare,c);
        }
    }
    cout << mare+mic;
    return 0;
}
