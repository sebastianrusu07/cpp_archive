#include <iostream>
#include <unordered_set>
using namespace std;

// ifstream cin("inserarechar.in");
// ofstream cout("inserarechar.out");

int main()
{
    string word,input;
    getline(cin,input);
    getline(cin,word);

    input.push_back(' ');

    int cnt=0;
    for(int i=0;i<input.length();i++)
    {
        if (input[i]==' ')continue;
        while (cnt<input.length() && input[i+cnt]==word[cnt])
        {
            cnt++;
        }
        if (cnt==word.length())
        {
            input.erase(i,cnt);
            i-=cnt;
        }
        cnt=0;
    }
    input.pop_back();
    cout << input;
    return 0;
}