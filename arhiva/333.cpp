#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    float a,b,c,A,B,C;
    cin >> A >> B >> C;
    a=min(min(A,B),C);
    c=max(max(A,B),C);
    b=A+B+C-a-c;

    if (a+b<=c)
    {
        cout << "nu este triunghi";
        return 0;
    }

    if (a*a+b*b==c*c)
    {
        cout << "triunghi dreptunghic";
        return 0;
    }

    if (a*a+b*b<c*c)
    {
        cout << "triunghi obtuzunghic";
        return 0;
    }

    cout << "triunghi ascutitunghic";
    return 0;
}