#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    string dna(n,'?');
    for(int i=0;i<k;i++)
    {
        int pos;
        string s;
        cin >> pos >> s;

        pos--;
        for(int j=0;j<s.size();j++)
        {
            if (dna[pos+j] != '?' && dna[pos+j] != s[j])
            {
                cout << "Villa";
                return 0;
            }
            dna[pos+j] = s[j];
        }
    }
    cout << dna;
    return 0;
}