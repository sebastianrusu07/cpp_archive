#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;

int matrix[515][515];

void generate(int step,int beginx,int endx,int beginy,int endy)
{
    if (step == 0)
    {
        return;
    }
    int midx = (beginx+endx)/2;
    int midy = (beginy+endy)/2;
    int limit = pow(2,step)-1;

    matrix[midx][midy] = step;
    generate(step-1,beginx,midx-1,beginy,midy-1);
    generate(step-1,midx+1,endx,beginy,midy-1);
    generate(step-1,beginx,midx-1,midy+1,endy);
    generate(step-1,midx+1,endx,midy+1,endy);
}

int main()
{
    int n;
    cin>>n;

    int limit = pow(2,n)-1;
    generate(n,0,limit-1,0,limit-1);
    for(int i=0;i<limit;i++)
    {
        for(int j=0;j<limit;j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}