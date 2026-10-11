#include <fstream>
#include <vector>
#include <stack>
using namespace std;

ifstream cin("paranteze1.in");
ofstream cout("paranteze1.out");

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        string input;
        cin >> input;
        int balance = 0;
        bool goNext = false;
        for (int i=0; i<input.size(); i++)
        {
            char p = input[i];
            if (p=='(')
            {
                balance++;
            }else
            {
                balance--;
            }
            if (balance < 0)
            {
                cout << 0 << '\n';
                goNext = true;
                break;
            }
        }
        if (goNext) continue;
        cout << (balance==0) << '\n';
    }
    return 0;
}