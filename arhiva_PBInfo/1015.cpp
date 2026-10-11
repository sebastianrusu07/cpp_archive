#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int firstHalf = 0,secondHalf = 0,half=n/2;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        if (i < half)
        {
            firstHalf += nr;
        }else
        {
            secondHalf += nr;
        }
    }
    cout << firstHalf + secondHalf;
    return 0;
}