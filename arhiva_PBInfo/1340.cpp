#include <iostream>
using namespace std;

void sortLink(double values[],int weights[],int n)
{
    for (int i=1;i<=n;i++)
    {
        for (int j=i+1;j<=n;j++)
        {
            if (values[j]>values[i])
            {
                swap(values[i],values[j]);
                swap(weights[i],weights[j]);
            }
        }
    }
}

int main()
{
    int n,weightLeft;
    cin>>n>>weightLeft;

    double values[1005];
    int weights[1005];
    for(int i=1;i<=n;i++)
    {
        double weight,price;
        cin>>weight>>price;
        values[i]=price/weight;
        weights[i]=weight;
    }
    sortLink(values,weights,n);

    double totalScore = 0;
    for (int i=1;weightLeft && i<=n;i++)
    {
        if (weightLeft - weights[i] >=0)
        {
            totalScore+=weights[i]*values[i];
            weightLeft-=weights[i];
        }else
        {
            totalScore+=weightLeft*values[i];
            break;
        }
    }
    cout<<totalScore;
    return 0;
}