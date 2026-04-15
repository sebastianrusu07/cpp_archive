#include <iostream>
using namespace std;

int main()
{
    int price,money,increase;
    cin>>price>>money>>increase;

    int total = increase*(increase+1)/2 * price;
    if (money>=total)
    {
        cout << 0;
    }else
    {
        cout << total - money;
    }
    return 0;
}