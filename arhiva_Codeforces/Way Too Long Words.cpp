#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        string word;
        cin >> word;

        if (word.length() > 10)
        {
            char first = word[0];
            string middle = to_string(word.length() - 2);
            char last = word[word.length() - 1];

            word = first + middle + last;
        }

        cout << word << endl;
    }
    return 0;
}