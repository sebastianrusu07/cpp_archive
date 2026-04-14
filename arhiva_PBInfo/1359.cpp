#include <cmath>
#include <vector>
#include <fstream>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

ifstream cin("ecuatie2.in");
ofstream cout("ecuatie2.out");

int main()
{
    string ec;
    cin >> ec;

    bool firstUnknown = false;
    if (ec[0] == 'x')
    {
        firstUnknown = true;
    }

    int pos=0;
    while (int(ec[pos])>=48 && ec[pos]!=':')pos++;
    char opChar = ec[pos];
    int opPos=pos;
    while (int(ec[pos])!='=')pos++;
    int equalPos = pos; //readability

    int result = stoi(ec.substr(equalPos+1));
    string fNr = ec.substr(0,opPos);
    string sNr = ec.substr(opPos+1,equalPos-opPos-1);

    int final,type;
    if (firstUnknown)
    {
        int second = stoi(sNr);
        if (opChar == '+')
        {
            final=result-second;
            type=2;
        }
        if (opChar == '-')
        {
            final=result+second;
            type=4;
        }
        if (opChar == '*')
        {
            final=result/second;
            type=6;
        }
        if (opChar == ':')
        {
            final=result*second;
            type=8;
        }
    }else
    {
        int second = stoi(fNr);
        if (opChar == '+')
        {
            final=result-second;
            type=1;
        }
        if (opChar == '-')
        {
            final=second-result;
            type=3;
        }
        if (opChar == '*')
        {
            final=result/second;
            type=5;
        }
        if (opChar == ':')
        {
            final=second/result;
            type=7;
        }
    }
    cout << type << endl << final;
    return 0;
}