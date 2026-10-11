#include <fstream>
#include <vector>
#include <stack>
using namespace std;

ifstream cin("paranteze2.in");
ofstream cout("paranteze2.out");

int main()
{
    string input;
    cin >> input;

    stack<char> pile;
    int maxSize=0;
    for (int i = 0; i < input.length(); i++)
    {
        char p = input[i];
        switch (p)
        {
        case '(': pile.push('('); break;
        case ')': pile.pop(); break;
        }
        maxSize = max(maxSize,int(pile.size()));
    }
    cout << maxSize;
    return 0;
}