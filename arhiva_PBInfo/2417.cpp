#include <fstream>
#include <vector>
#include <string>
using namespace std;

ifstream cin("criptare1.in");
ofstream cout("criptare1.out");

string alphabet = "abcdefghijklmnopqrstuvwxyz";

vector<int> parseKey(string encrypted,string key)
{
    vector<int> result(key.size());
    int nextIdx = 0;
    for (int posInAlphabet=0;posInAlphabet<26;posInAlphabet++)
    {
        char currLetter = alphabet[posInAlphabet];
        auto posInKey = key.find(currLetter);

        if(posInKey==string::npos) continue;

        result[posInKey] = nextIdx;
        nextIdx++;
    }
    return result;
}

int main()
{
    string encrypted,key;
    cin >> encrypted >> key;
    vector<int> trueKey = parseKey(encrypted,key);
    int messageLen = encrypted.size(),keyLen = key.length(),startPoints = (messageLen+keyLen-1)/keyLen;

    for (int j=0;j<startPoints;j++)
    {
        for (int i=0;i<keyLen;i++)
        {
            char c = encrypted[trueKey[i] * startPoints + j];
            cout << (c=='*' ? ' ' : c);
        }
    }
    return 0;
}