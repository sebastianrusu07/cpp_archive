#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m;
    cin >> m;

    cout << m << endl;
    for(int i=0;i<m;i++)
    {
        string item;
        cin >> item;
        cout << item << '\n';
    }
    return 0;
}