#include <fstream>
#include <unordered_set>
using namespace std;

ifstream cin("inserarechar.in");
ofstream cout("inserarechar.out");

int main()
{
    string word,input;
    cin>>word>>ws;
    getline(cin,input);

    input.push_back(' ');

    int cnt=0;
    bool one=false;
    for(int i=0;i<input.length();i++)
    {
        if (input[i]==' ')continue;
        while (cnt<input.length() && input[i+cnt]==word[cnt])
        {
            cnt++;
        }
        if (cnt==word.length() && (input[i-1]==' ' || i==0) && (input[i+cnt]==' '))
        {
            i+=cnt;
            input.insert(i,"?");
            i++;
            one = true;
        }
        cnt=0;
    }
    input.pop_back();
    if (one) cout<<input;
    else cout<< "NU APARE";
    return 0;
}