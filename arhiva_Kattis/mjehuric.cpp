#include <iostream>
using namespace std;


int main()
{
    string sorted="012345",s="000000";
    cin >> s[1] >> s[2] >> s[3] >> s[4] >> s[5];

    while (sorted!=s)
    {
        if (s[1]>s[2])
        {
            swap(s[1],s[2]);
            for (int i=1;i<=5;i++)
            {
                cout << s[i] << ' ';
            }
            cout << '\n';
        }
        if (s[2]>s[3])
        {
            swap(s[2],s[3]);
            for (int i=1;i<=5;i++)
            {
                cout << s[i] << ' ';
            }
            cout << '\n';
        }
        if (s[3]>s[4])
        {
            swap(s[3],s[4]);
            for (int i=1;i<=5;i++)
            {
                cout << s[i] << ' ';
            }
            cout << '\n';
        }
        if (s[4]>s[5])
        {
            swap(s[4],s[5]);
            for (int i=1;i<=5;i++)
            {
                cout << s[i] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}