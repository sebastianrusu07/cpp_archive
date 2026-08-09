#include <fstream>
#include <algorithm>
using namespace std;

ifstream cin("cifru.in");
ofstream cout("cifru.out");

int main()
{
    int t;
    cin >> t;

    if (t==1)
    {
        string compare = "#*0123456789";
        int n;
        cin >> n;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            string code = "";
            for (int j = 0;j<12; j++)
            {
                char c;
                cin >> c;
                code += c;
            }
            sort(code.begin(), code.end());
            count += (code==compare);
        }
        cout << count;
    }else
    {
        string terminal="";
        for (int i=0;i<12;i++)
        {
            char c;
            cin >> c;
            terminal+=c;
        }
        int n;
        cin >> n;

        int count = 0;
        for (int i=0;i<n;i++)
        {
            string cipher;
            cin >> cipher;
            int idx = 1;
            int pos = terminal.find(cipher[0]);
            bool ok = true;
            while (idx < cipher.length())
            {
                int newPos = terminal.find(cipher[idx]);
                int r1 = pos / 3,   c1 = pos % 3;
                int r2 = newPos / 3, c2 = newPos % 3;

                if (abs(r1 - r2) + abs(c1 - c2) == 1){
                    pos = newPos;
                    idx++;
                }else{
                    ok = false;
                    break;
                }
            }
            cout << int(ok) << '\n';
        }
    }
    return 0;
}