#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

bool isVowel(char c)
{
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int main()
{
    string pass;
    while (cin >> pass && pass != "end")
    {


        bool isOk=true;
        //1;
        for(int j=0;j<pass.length();j++)
        {
            if(isVowel(pass[j]))
            {
                break;
            }
            if (j==pass.length()-1)
            {
                cout << '<' << pass << "> is not acceptable.\n";
                isOk = false;
                break;
            }
        }

        if(!isOk) continue;

        //2
        if (pass.size()>=3)
        {
            for(int j=0;j<pass.length()-2;j++)
            {
                if ( (isVowel(pass[j]) && isVowel(pass[j+1]) && isVowel(pass[j+2])) || (!isVowel(pass[j]) && !isVowel(pass[j+1]) && !isVowel(pass[j+2])) )
                {
                    cout << '<' << pass << "> is not acceptable.\n";
                    isOk = false;
                    break;
                }
            }
        }

        if(!isOk) continue;

        //3
        if (pass.size()>=2)
        {
            for(int j=0;j<pass.length()-1;j++)
            {
                if (pass[j]!='e' && pass[j]!='o' && pass[j]==pass[j+1])
                {
                    cout << '<' << pass << "> is not acceptable.\n";
                    isOk = false;
                    break;
                }
            }
        }

        if(!isOk) continue;

        cout << '<' << pass << "> is acceptable.\n";
    }
    return 0;
}