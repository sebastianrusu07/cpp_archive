#include <fstream>
#include <bitset>
#include <algorithm>
#include <vector>
using namespace std;

ifstream cin("numere.in");
ofstream cout("numere.out");

int main() {
    int t;
    cin >> t;

    if (t==1)
    {
        int nr;
        cin >> nr;
        cout << max(nr%10,nr/10%10) << min(nr%10,nr/10%10);
        return 0;
    }

    if (t==2)
    {
        int n,x;
        cin >> x >> n;
        for (int i=1; i<=n; i++)
        {
            int nr;
            cin >> nr;
            if (nr==x)
            {
                cout << i;
                return 0;
            }
        }
        cout << 0;
        return 0;
    }

    if (t==3)
    {
        int n,x;
        cin >> x >> n;
        int first=-1,second=-1;
        for (int i=1; i<=n; i++)
        {
            int nr;
            cin >> nr;
            if (nr==x)
            {
                if (first==-1)
                {
                    first = i;
                }else
                {
                    if (second==-1)
                    {
                        second = i;
                    }else
                    {
                        first = second;
                        second = i;
                    }

                }
            }
        }
        if (second!=-1)
        {
            cout << first << ' ' << second;
        }else
        {
            if (first!=-1)
            {
                cout << 0 << ' ' << first;
            }else
            {
                cout << 0 << ' ' << 0;
            }
        }
        return 0;
    }

    string nr;
    cin >> nr;

    vector<int> v;
    for (int i=0; i<nr.size(); i++)
    {
        if ((nr[i]-'0')%2==1)
        {
            v.push_back(nr[i]-'0');
        }
    }

    reverse(v.begin(), v.end());
    for (int i=0; i < nr.size(); i++)
    {
        if ((nr[i]-'0')%2==1)
        {
            nr[i]=(v[0]+'0');
            v.erase(v.begin());
        }
    }
    cout << nr;
    return 0;
}