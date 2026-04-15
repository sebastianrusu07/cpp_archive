#include <iostream>
using namespace std;

int main()
{
    int n,h;
    cin >> n >> h;

    int total=0;
    for (int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        if (nr>h)
        {
            total+=2;
        }else
        {
            total++;
        }
    }
    cout << total;
    return 0;
}