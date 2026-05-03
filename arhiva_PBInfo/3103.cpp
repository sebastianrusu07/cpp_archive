#include <iostream>
#include <string>
using namespace std;

int gcd(int a, int b)
{
    while (b)
    {
        int t = a%b;
        a = b;
        b = t;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;

    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int gcdFirstDiagonal=matrix[0][0];
    for (int i = 1; i < n; i++)
    {
        gcdFirstDiagonal = gcd(gcdFirstDiagonal, matrix[i][i]);
    }

    int gcdSecondDiagonal=matrix[0][n-1];
    for (int i = 1; i < n; i++)
    {
        gcdSecondDiagonal = gcd(gcdSecondDiagonal, matrix[i][n-1-i]);
    }

    int gcdContour=matrix[0][0];
    for (int i = 1; i < n; i++)
    {
        gcdContour = gcd(gcdContour, matrix[0][i]);
    }
    for (int i = 1; i < n; i++)
    {
        gcdContour = gcd(gcdContour, matrix[i][n-1]);
    }
    for (int i = 1; i < n; i++)
    {
        gcdContour = gcd(gcdContour, matrix[i][0]);
    }
    for (int i = 1; i < n-1; i++)
    {
        gcdContour = gcd(gcdContour, matrix[n-1][i]);
    }
    cout << gcdFirstDiagonal << ' ' << gcdSecondDiagonal << ' ' << gcdContour;
    return 0;
}