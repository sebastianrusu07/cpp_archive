#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string preFirst;
    cin >> preFirst;
    reverse(preFirst.begin(), preFirst.end());
    int first = stoi(preFirst);
    for(int i=1;i<n;i++)
    {
        int nr;
        cin >> nr;
        if (nr==first)
        {
            cout << "DA";
            return 0;
        }
    }
    cout << "NU";
    return 0;
}