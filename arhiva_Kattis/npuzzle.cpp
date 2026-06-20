#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    string correct = "ABCDEFGHIJKLMNO.";

    string a,b,c,d;
    cin >> a >> b >> c >> d;

    string total = a+b+c+d;
    int cnt=0;
    for (int i = 0; i < total.length(); i++)
    {
        if (total[i] == '.') continue; //Fuck you and your cryptic problems
        if (total[i]!=correct[i])
        {
            int realPos = correct.find(total[i]);
            cnt+=abs(realPos/4 - i/4) + abs(realPos%4 - i%4);
        }
    }
    cout << cnt;
    return 0;
}