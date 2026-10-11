#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    string input;
    cin >> input;

    stack<int> parenthesis;
    int cnt=1;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '(')
        {
            parenthesis.push(cnt);
            cnt++;
        }else
        {
            cout << parenthesis.top() << ' ';
            parenthesis.pop();
        }
    }
    return 0;
}