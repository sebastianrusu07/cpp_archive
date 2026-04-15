#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool hard=false;
    for (int i = 1; i <= n; i++)
    {
        int opinion;
        cin >> opinion;
        if (opinion == 1)
        {
            hard = true;
        }
    }

    cout << (hard==true ? "HARD" : "EASY");
    return 0;
}