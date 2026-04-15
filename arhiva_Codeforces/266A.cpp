#include <iostream>
using namespace std;

int main()
{
    int org;
    cin >> org;
    string input;
    cin >> input;

    for (int i = 1; i < input.length(); i++)
    {
        if (input[i] == input[i-1] || input[i] == input[i+1])
        {
            input.erase(input.begin() + i);
            i--;
        }
    }

    cout << org-input.size();
    return 0;
}