#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <fstream>
#include <thread>
#include <cctype>
using namespace std;

ifstream cin("caesar.in");
ofstream cout("dbftbs.out");

int main()
{
    string text;
    getline(cin, text);

    int key;
    cin >> key;

    bool encrypt = false;
    string inputCrypt;
    cin >> inputCrypt;
    if (inputCrypt == "encrypt")
    {
        encrypt = true;
    }

    for (int i = 0; i < text.length(); i++)
    {
        if (!isalpha(text[i])) continue;
        if (encrypt)
        {
            if (isupper(text[i]))
            {
                text[i] = ( text[i] - 'A' + key ) % 26 + 'A';
            }else
            {
                text[i] = ( text[i] - 'a' + key ) % 26 + 'a';
            }
        }else
        {
            if (isupper(text[i]))
            {
                text[i] = ( text[i] - 'A' - key + 26 ) % 26 + 'A';
            }else
            {
                text[i] = ( text[i] - 'a' - key + 26 ) % 26 + 'a';
            }
        }
    }
    cout << text;
    return 0;
}