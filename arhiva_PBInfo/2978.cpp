#include <fstream>
#include <string>
using namespace std;

ifstream cin("aur.in");
ofstream cout("aur.out");

int nrCif(int nr)
{
    string s = to_string(nr);
    return s.length();
}

int main()
{
    int c;
    cin >> c;

    switch (c)
    {
    case 1:
        {
            int n;
            cin >> n;
            int totalDigits = 0;
            for (int i = 0; i < n; i++)
            {
                int num;
                cin >> num;
                totalDigits += nrCif(num);
            }

            cout << totalDigits;
            return 0;
        }
    case 2:
        {
            int n,k;
            cin >> n >> k;

            int digitsSoFar = 0;
            for (int i=0;i<n;i++)
            {
                int num;
                cin >> num;
                int toAdd = nrCif(num);
                if(digitsSoFar+toAdd >= k)
                {
                    cout << to_string(num)[k-digitsSoFar-1];
                    return 0;
                }else
                {
                    digitsSoFar += toAdd;
                }
            }
            return 0;
        }
    case 3:
        {
            int n,k;
            cin >> n >> k;
            string concat;
            for (int i = 0; i < n; i++)
            {
                string section;
                cin >> section;
                concat += section;
            }
            unsigned long long maximum=0;
            for (int i = 0; i < concat.length()-k+1; i++)
            {
                string section = concat.substr(i,k);
                maximum = max(stoull(section),maximum);
            }
            cout << maximum;
            return 0;
        }
    }
    return 0;
}