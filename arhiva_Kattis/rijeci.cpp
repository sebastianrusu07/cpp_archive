#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int x=0,y=1;
    for(int i=1;i<a;i++)
    {
        int temp = x+y;
        x=y;
        y=temp;
    }
    cout << x << ' ' << y;
    return 0;
}