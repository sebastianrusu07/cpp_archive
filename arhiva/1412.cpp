#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int shape,size;
    cin >> shape >> size;
    if (shape == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                cout << i ;
            }
            cout << endl;
        }
    }else
    {
        if (shape == 2)
        {
            for (int i = 1; i <= size; i++)
            {
                for (int j = size-i-1; j >=0; j--)
                {
                    cout << " ";
                }
                for (int j = 1; j<=i*2-1; j++)
                {
                    cout << i;
                }
                cout << endl;
            }
            for (int i = size-1; i>=1; i--)
            {
                for (int j = size-i-1; j >=0; j--)
                {
                    cout << " ";
                }
                for (int j = i*2-1; j>=1; j--)
                {
                    cout << i;
                }
                cout << endl;
            }
        }else
        {
            if (shape == 3)
            {
                for (int i = 1; i <= size; i++)
                {
                    for (int j = 1; j <= 2*size; j++)
                    {
                        cout << i;
                    }
                    cout << endl;
                }
            }else
            {
                for (int i = 1; i <= size; i++)
                {
                    for (int j = size-i-1; j >=0; j--)
                    {
                        cout << " ";
                    }
                    for (int j = 1; j<=i*2-1; j++)
                    {
                        cout << i;
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}