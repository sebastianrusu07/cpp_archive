#include <iostream>
using namespace std;

long long powll(long long a, long long b)
{
    long long res = 1;
    while (b)
    {
        res *= a;
        b--;
    }
    return res;
}

int main()
{
    long long ax,ay,bx,by,cx,cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;

    long long dist1 = powll((ax - bx),2) + powll((ay - by),2);
    long long dist2 = powll((bx - cx),2) + powll((by - cy),2);
    long long dist3 = powll((ax - cx),2) + powll((ay - cy),2);

    if (dist1 > dist2 && dist1 > dist3)
    {
        double middlex=(ax+bx)/2.0;
        double middley=(ay+by)/2.0;
        //M = ( B + D )/ 2
        //2 * M = B + D
        //2 * M - B = D;
        double dx = 2*middlex - cx;
        double dy = 2*middley - cy;
        cout << (long long)dx << ' ' << (long long)dy;
    }

    if (dist2 > dist1 && dist2 > dist3)
    {
        double middlex=(bx+cx)/2.0;
        double middley=(by+cy)/2.0;

        double dx = 2*middlex - ax;
        double dy = 2*middley - ay;
        cout << (long long)dx << ' ' << (long long)dy;
    }

    if (dist3 > dist1 && dist3 > dist2)
    {
        double middlex=(ax+cx)/2.0;
        double middley=(ay+cy)/2.0;

        double dx = 2*middlex - bx;
        double dy = 2*middley - by;
        cout << (long long)dx << ' ' << (long long)dy;
    }
    return 0;
}