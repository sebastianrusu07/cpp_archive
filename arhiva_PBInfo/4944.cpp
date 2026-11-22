#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

ifstream cin("egipt.in");
ofstream cout("egipt.out");

void padWithZero(string& a,string& b)
{
    while (a.size()<b.size())
    {
        a+='0';
    }
    while (b.size()<a.size())
    {
        b+='0';
    }
}

string transformToNumber(string sentence)
{
    int len = sentence.length();
    string result = "";
    for (int i=0;i<len;i++)
    {
        if (sentence[i] < 'a' || sentence[i] > 'z') continue;
        result += to_string(int(sentence[i]));
    }
    return result;
}

string addition(string a,string b)
{
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    padWithZero(a,b);
    string ans = "";
    int len = a.length();
    int extra=0;
    for (int i=0;i<len;i++)
    {
        int intermediary = (a[i] + b[i]- 2 * '0') + extra;
        int keep = intermediary % 10;
        extra = intermediary / 10;
        ans += (keep + '0');
    }
    if (extra != 0) ans += extra + '0';
    reverse(ans.begin(),ans.end());
    return ans;
}

string multiplication(string a,string b)
{
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    string bigAns = "";
    int len = a.length();
    for (int i=0;i<b.length();i++)
    {
        int extra=0;
        char current = b[i];
        string ans = "";
        for (int j=0;j<len;j++)
        {
            int intermediary = (a[j] - '0') * (current -'0') + extra;
            int keep = intermediary % 10;
            extra = intermediary / 10;
            ans += (keep + '0');
        }
        if (extra > 0)
        {
            string sExtra = to_string(extra);
            reverse(sExtra.begin(),sExtra.end());
            ans += sExtra;
        }
        reverse(ans.begin(),ans.end());
        ans += string(i,'0');
        bigAns = addition(bigAns,ans);
    }
    return bigAns;
}

string longestConsecutiveOdds(string number)
{
    string longestOdd = "",currentOdd = "";
    for (int i=0;i<number.length();i++)
    {
        if ((number[i]-'0') % 2 != 0)
        {
            currentOdd += number[i];
        }else
        {
            if (currentOdd.length() > longestOdd.length())
            {
                longestOdd = currentOdd;
            }
            currentOdd.clear();
        }
    }
    if (currentOdd.length() > longestOdd.length())
    {
        longestOdd = currentOdd;
    }
    return longestOdd;
}

int main()
{
    int texts;
    cin >> texts >> ws;
    string result = "";
    for (int i=0;i<texts;i++)
    {
        string sentence;
        getline(cin,sentence);
        result = addition(result,transformToNumber(sentence));
    }
    string year;
    cin >> year;
    result = multiplication(year,result);
    cout << longestConsecutiveOdds(result);
    return 0;
}