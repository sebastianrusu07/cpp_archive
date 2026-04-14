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
    int nr;
    cin >> nr;
    int a=nr%10,b=nr/10%10,c=nr/100;
    int A=min(min(a,b),c);
    int B=max(max(a,b),c);
    cout << a+b+c-A-B;
    return 0;
}
