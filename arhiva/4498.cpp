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
    int  a,b;
    cin >> a >> b;

    cout << max(a/100,b/100)*10+min(a/100,b/100) << " ";
    cout << max(a/10%10,b/10%10)*10+min(a/10%10,b/10%10) << " ";
    cout << max(a%10,b%10)*10+min(a%10,b%10) << " ";

    return 0;
}