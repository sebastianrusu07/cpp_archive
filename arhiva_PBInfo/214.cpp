#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int nr;
    cin >> nr;

    string number = to_string(nr);
    int n = number.length();

    for(int i=0;i<n;i++)
    {
        for(int y=0;y<n;y++) {
            cout << number[n-y-1] << " ";
        }
        cout << endl;
    }
    return 0;
}