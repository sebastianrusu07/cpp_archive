#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    char c;
    cin>>n>>c;

    string s;
    cin>>s;

    cout << "Unnar fann hana";
    if (s.find(c)==string::npos)
    {
        cout << " ekki!";
    }else
    {
        cout << '!';
    }
    return 0;
}