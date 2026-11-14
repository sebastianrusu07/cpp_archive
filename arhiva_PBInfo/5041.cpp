#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int bill5=0,bill10=0; //20 dollar bills are useless so we don't need to count them
    for(int i=0;i<n;i++)
    {
        int paid;
        cin>>paid;

        switch(paid)
        {
        case 5:
            {
                bill5++;
                break;
            }
        case 10:
            {
                if (bill5<=0)
                {
                    cout << "NEY";
                    return 0;
                }
                bill10++;
                bill5--;
                break;
            }
        case 20:
            {
                if (bill5<=0 || bill10<=0)
                {
                    cout << "NEY";
                    return 0;
                }
                bill10--;
                bill5--;
                break;
            }
        }
    }
    cout << "YEAH";
    return 0;
}