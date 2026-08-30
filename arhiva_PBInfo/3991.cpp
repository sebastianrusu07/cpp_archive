#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string sequence;
    cin>>sequence;

    if(sequence.length()%2!=0)
    {
        cout << -1;
        return 0;
    }

    int unclosed=0,unopened=0;
    for (int i=0;i<sequence.length();i++)
    {
        if(sequence[i]=='(')
        {
            unclosed++;
        }else
        {
            if(sequence[i]==')' && unclosed==0)
            {
                unopened++;
            }else
            {
                unclosed--;
            }
        }



    }
    int total = unclosed/2 + unopened/2
    cout<<total;
    return 0;
}