#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        string input;
        cin >> input;

        int len=sqrt(input.length());
        char letter[len][len];
        for(int j=0;j<len;j++)
        {
            for(int k=0;k<len;k++)
            {
                letter[j][k]=input[j*len+k];
            }
        }


        for (int j=len-1;j>=0;j--)
        {
            for (int k=0;k<len;k++)
            {
                cout << letter[k][j];
            }
        }
        cout << '\n';
    }
    return 0;
}