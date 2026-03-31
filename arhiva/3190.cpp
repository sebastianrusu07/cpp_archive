#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <fstream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <thread>
using namespace std;

ifstream cin("vigenere.in");
ofstream cout("vigenere.out");

int main()
{
    string text,key;
    cin >> text >> key;
    int keyCnt=0;
    for(int i=0;i<text.length();i++)
    {
        if (keyCnt==key.length())
        {
            keyCnt=0;
        }
        int step = (int(key[keyCnt])-'a');
        int nextLetter = (int(text[i])-'a'+step)%26+'a';
        text[i] = char(nextLetter);
        keyCnt++;
    }
    cout << text;
    return 0;
}