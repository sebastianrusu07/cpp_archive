#include <fstream>
#include <vector>
#include <stack>
using namespace std;

ifstream cin("paranteze3.in");
ofstream cout("paranteze3.out");

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;

        stack<char> pile;
        bool skip = false;
        for (int j = 0; j < input.length(); j++)
        {
            char c = input[j];
            if (c == '(' || c == '[')
            {
                pile.push(c);
            }else
            {
                if (!pile.empty())
                {
                    char pair = pile.top();
                    pile.pop();
                    if ( !(pair == '(' && c == ')') && !(pair=='[' && c == ']'))
                    {
                        skip = true;
                        break;
                    }
                }
                else
                {
                    skip = true;
                    break;
                }
            }
        }
        if (skip)
        {
            cout << "0\n";
        }else
        {
            cout << (pile.empty() ? 1 : 0) << '\n';
        }
    }
    return 0;
}