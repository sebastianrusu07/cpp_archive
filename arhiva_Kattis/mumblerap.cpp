#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n >> ws;;

    string input;
    getline(cin, input);

    int largestNumber=0;
    string construct;
    for (int i = 0; i < n; i++)
    {
        if (isdigit(input[i]))
        {
            construct+=to_string(input[i]-'0');
        }else
        {
            if (!construct.empty())
            {
                int stoin=stoi(construct);
                if (stoin>largestNumber)
                {
                    largestNumber=stoin;
                }
                construct.clear();
            }
        }
    }
    if (!construct.empty())
    {
        int stoin=stoi(construct);
        if (stoin>largestNumber)
        {
            largestNumber=stoin;
        }
        construct.clear();
    }

    cout << largestNumber;
    return 0;
}