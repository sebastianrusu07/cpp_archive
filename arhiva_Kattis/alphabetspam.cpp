#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int spaces=0,lower=0,upper=0,symbols=0;
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='_')
        {
            spaces++;
            continue;
        }

        if (isalpha(s[i]))
        {
            if (islower(s[i]))
            {
                lower++;
            }else
            {
                upper++;
            }
            continue;
        }

        symbols++;
    }
    int total = spaces+lower+upper+symbols;
    double spacesRatio = (double)spaces/total;
    double lowerRatio = (double)lower/total;
    double upperRatio = (double)upper/total;
    double symbolsRatio = (double)symbols/total;

    cout << fixed << setprecision(7) << spacesRatio << '\n' << lowerRatio << '\n' << upperRatio << '\n' << symbolsRatio ;
    return 0;
}