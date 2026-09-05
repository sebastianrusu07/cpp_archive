#include <cmath>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int diofantic(int numCount,int nums[50005],int a,int b,int c)
{
    bool present[65540];
    long long squaredNums[50005];
    for (bool &it : present) it = false;
    for(int i=1;i<numCount;i++)
    {
        present[nums[i]]=true;
        squaredNums[i]=1LL * nums[i]*nums[i];
    }
    int cnt=0;
    if (numCount==2)
    {
        cnt++;
    }
    for (int i=1;i<numCount;i++)
    {
        long long ySquared = (c-a*squaredNums[i]);
        if (ySquared >= 0 && ySquared%b==0)
        {
            ySquared/=b;
            int y=sqrt(ySquared);
            while ((long long)(y+1)*(y+1) <= ySquared) y++; //sqrt supposedly can mess this up
            if (y*y==ySquared && present[y] && nums[i]!=y)
            {
                cnt++;
            }
        }

    }
    return cnt;
}