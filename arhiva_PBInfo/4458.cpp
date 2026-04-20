#include <fstream>
#include <unordered_set>
using namespace std;

ifstream cin("secventa4.in");
ofstream cout("secventa4.out");

int main()
{
    int n;
    cin >> n;

    int maxLen=0,maxA=0,maxB=0,maxSum=0;
    int len=0,a=0,sum=0,prev=-1;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        if (nr%10 == prev || prev==-1)
        {
            if (a==-1)
            {
                a=i;
                len=1;
                sum+=nr;
            }else
            {
                len++;
                sum+=nr;
            }
        }else
        {
            if (len>maxLen)
            {
                maxLen=len;
                maxA=a;
                maxB=i;
                maxSum=sum;
            }else
            {
                if (maxLen==len)
                {
                    if (sum>maxSum)
                    {
                        maxLen=len;
                        maxA=a;
                        maxB=i;
                        maxSum=sum;
                    }
                }
            }
            a=-1;
            len=0;
            sum=0;
        }
        prev=nr%10;
    }
    if (len>maxLen)
    {
        maxA=a;
        maxB=n-1;
    }
    cout << maxA << ' ' << maxB;
    return 0;
}