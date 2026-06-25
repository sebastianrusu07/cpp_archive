#include <fstream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <queue>
using namespace std;

ifstream cin("blocks.in");
ofstream cout("blocks.out");

int lettersCount[26];

void initToZero(int n[26])
{
    for (int i=0;i<26;i++)
    {
        n[i] = 0;
    }
}

int main()
{
    int pairs;
    cin >> pairs;

    for (int i=0;i<pairs;i++)
    {
        string a,b;
        cin >> a >> b;

        int lettersA[26],lettersB[26];
        initToZero(lettersA);
        initToZero(lettersB);

        for (int j=0;j<a.length();j++)
        {
            lettersA[a[j]-'a']++;
        }
        for (int j=0;j<b.length();j++)
        {
            lettersB[b[j]-'a']++;
        }
        for (int j=0;j<26;j++)
        {
            lettersCount[j]+=max(lettersA[j],lettersB[j]);
        }
    }
    for (int j=0;j<26;j++)
    {
        cout << lettersCount[j] << '\n';
    }
    cin.close();
    cout.close();
    return 0;
}