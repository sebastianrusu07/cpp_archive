#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    int sumA=0;
    for (int i=0;i<a;i++)
    {
        int nr;
        cin >> nr;
        sumA+=nr;
    }

    int sumB=0;
    for (int i=0;i<b;i++)
    {
        int nr;
        cin >> nr;
        sumB+=nr;
    }

    if (sumA>sumB)
    {
        cout << "Button 1";
        return 0;
    }
    if (sumA<sumB)
    {
        cout << "Button 2";
        return 0;
    }
    cout << "Oh no";
    return 0;
}