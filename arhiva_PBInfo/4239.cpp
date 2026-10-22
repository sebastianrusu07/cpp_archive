#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
using namespace std;

int MatDiag(int a[100][100], int n){
    for (int k=0; k<n; k++)
    {
        int mustBe = a[0][k];
        for (int i = 1; i+k < n; i++)
        {
            if (a[i][i+k]!=mustBe)
            {
                return 0;
            }
        }
    }
    for (int k=1; k<n; k++)
    {
        int mustBe = a[k][0];
        for (int i = 1; i+k < n; i++)
        {
            if (a[i+k][i]!=mustBe)
            {
                return 0;
            }
        }
    }
    return 1;
}