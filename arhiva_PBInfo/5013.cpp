#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <string>
#include <set>
using namespace std;

ifstream cin("numere.in");
ofstream cout("numere.out");

int oglindit(int nr)
{
    int newNr=0;
    while (nr)
    {
        newNr = newNr * 10 + nr % 10;
        nr /= 10;
    }
    return newNr;
}

int cifCount(int nr)
{
    if (nr==0) return 1;
    int count = 0;
    while (nr)
    {
        nr/=10;
        count++;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;

    int n,k;
    cin >> n >> k;

    switch (t)
    {
    case 1:
        {
            int biggest=0;
            for (int i = 0; i < n; i++)
            {
                int num;
                cin >> num;
                biggest = max(biggest,num);
            }
            cout << biggest;
            return 0;
        }
    case 2:
        {
            int total = 0;
            for (int i = 0; i < n; i++)
            {
                int num;
                cin >> num;
                total += cifCount(num);
            }
            cout << total;
            return 0;
        }
    case 3:
        {
            string final;
            for (int i = 0; i < n; i++)
            {
                string section;
                cin >> section;
                final += section;
            }

            reverse(final.begin(), final.end());
            long long totalSum = 0;
            while (final.size() >= k)
            {
                string section = final.substr(final.size() - k);
                reverse(section.begin(), section.end());
                final.erase(final.end()-k, final.end());
                totalSum += stoll(section);
            }
            if (!final.empty())
            {
                reverse(final.begin(), final.end());
                totalSum += stoll(final);
            }
            cout << totalSum;
            return 0;
        }
    }
    return 0;
}