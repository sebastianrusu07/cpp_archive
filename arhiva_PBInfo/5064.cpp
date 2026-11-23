#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
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

    int sum=0,storedTree=-1;
    for(int i=0;i<trees;i++)
    {
        int num;
        cin >> num;
        if (isPerfectSquare(num))
        {
            sum+=num;
            k--;
            if (k==0)
            {
                storedTree = num;
            }
        }
    }
    cout << sum << '\n' << (k>0?"nu exista":to_string(storedTree)); //to string so i can use this format
    return 0;
}