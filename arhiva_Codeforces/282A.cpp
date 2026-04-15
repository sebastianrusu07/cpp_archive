#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int res=0;
    for (int i = 1; i <= n; i++)
    {
        string input;
        cin >> input;
        if (input[0]=='-' || input[2]=='-')
        {
            res--;
        }else
        {
            res++;
        }
    }
    cout << res;
    return 0;
}