#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

bool isMajorOdd(int nr)
{
    int sumEven=0,sumOdd=0;
    for(int i=2;i*i<=nr;i++)
    {
        if(nr%i==0)
        {
            int duo = nr/i;
            if (i%2==0)
            {
                sumEven+=i;
            }else
            {
                sumOdd+=i;
            }
            if(duo%2==0)
            {
                sumEven+=duo;
            }else
            {
                sumOdd+=duo;
            }
        }
    }
    return sumOdd > sumEven;
}

int main() {
    int n;
    cin >> n;
    int minim = -1,maxim = -1;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        if (isMajorOdd(nr))
        {
            if(nr < minim || minim == -1)
            {
                minim = nr;
            }
            if(nr > maxim || minim == -1)
            {
                maxim = nr;
            }
        }
    }
    if (minim == -1 || maxim == -1)
    {
        cout << "nu exista";
        return 0;
    }
    cout << minim << " " << maxim;
    return 0;
}