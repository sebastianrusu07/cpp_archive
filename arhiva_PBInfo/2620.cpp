long long NextNumber(long long n)
{
    if(n==0) return 0;
    vector<int> base2;
    int cnt1 = 0;
    while (n>0)
    {
        base2.push_back(n%2);
        cnt1+=n%2;
        n/=2;
    }
    reverse(base2.begin(),base2.end());

    int i;
    for (i = (int)base2.size()-2; i>0; i--)
    {
        if (base2[i+1] - base2[i]==1) break;
    }
    if (i > 0)
    {
        swap(base2[i+1],base2[i]);
        i+=2;
        int cnt=0;
        for (int j=i; j<(int)base2.size();j++)
        {
            if (base2[j]==1)
            {
                cnt++;
            }
        }
        for (int j=i;j<base2.size()-cnt;j++)
        {
            base2[j]=0;
        }
        for (int j=base2.size()-cnt;j<(int)base2.size();j++)
        {
            base2[j]=1;
        }
    }else
    {
        for (int i=0;i<base2.size()-cnt1+1;i++)
        {
            base2[i]=0;
        }
        for (int i=base2.size()-cnt1+1;i<base2.size();i++)
        {
            base2[i]=1;
        }
        base2.insert(base2.begin(),1);
    }
    long long result = 0;
    for (int i=0;i<(int)base2.size();i++)
    {
        result = result * 2 + base2[i];
    }
    return result;
}
