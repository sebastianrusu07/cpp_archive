#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

bool isPerfectSquare(int num)
{
    int root = (int)sqrt(num);
    return root*root == num;
}

int main()
{
    int trees,k;
    cin >> trees >> k;

    int sum=0,count=0;
    for(int i=0;i<trees;i++)
    {
        int num;
        cin >> num;
        if (isPerfectSquare(num))
        {
            count++;
            if (k>0)
            {
                k--;
                sum+=num;
            }
        }
    }
    cout << count << '\n' << (k>0?"imposibil":to_string(sum)); //to string so i can use this format
    return 0;
}