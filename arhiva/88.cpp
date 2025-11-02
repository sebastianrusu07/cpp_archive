#include <cmath>
#include <vector>
#include <fstream>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

ifstream cin("palindrom.in");
ofstream cout("palindrom.out");

int isPalindrome(string n)
{
    string N=n;
    reverse(N.begin(),N.end());
    return (N==n);
}

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        string w;
        cin>>w;
        cout<<isPalindrome(w)<<endl;
    }
    return 0;
}