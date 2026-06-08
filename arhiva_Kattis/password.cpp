#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<double> probabilities;
    for(int i=1;i<=n;i++)
    {
        double nr;
        string pass;
        cin>>pass>>nr;
        probabilities.push_back(nr);
    }
    sort(probabilities.begin(),probabilities.end(),greater<double>());

    double sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=probabilities[i]*(i+1);
    }
    cout<<fixed<<setprecision(5)<<sum;
    return 0;
}

