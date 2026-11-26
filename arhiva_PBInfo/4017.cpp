#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

ifstream cin("skip.in");
ofstream cout("skip.out");

void encode(string& plain)
{
    int n = plain.length();
    int half = n / 2;
    string result(n, ' ');

    for (int i = 0; i < half; i++)
    {
        result[2 * i] = plain[i];
        result[2 * i + 1] = plain[half + i];
    }

    if (n % 2 == 1)
    {
        result[n - 1] = plain[n - 1];
    }

    plain = result;
}

void decode(string& encoded)
{
    int half = encoded.length() / 2;
    string first, second;
    for (int i = 0; i < half; i++)
    {
        first += encoded[2 * i];
        second += encoded[2 * i + 1];
    }
    if (encoded.length() % 2 == 1)
    {
        second += encoded.back();
    }
    encoded = first + second;
}

int main()
{
    int caseNumber;
    cin >> caseNumber;

    string word;
    while (cin >> word && word!="PHOTOLITHOGRAPHY")
    {
        if (caseNumber == 1)
        {
            encode(word);
            cout << word << ' ';
        }else
        {
            decode(word);
            cout << word << ' ';
        }
    }
    return 0;
}