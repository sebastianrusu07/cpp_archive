#include <fstream>
#include <vector>
using namespace std;

ifstream cin("elimin_prime.in");
ofstream cout("elimin_prime.out");

#define LIMIT 100000
bool keepThisPosition[LIMIT+5];

void init()
{
    for (int i=2;i<=LIMIT;i++)
    {
        if (keepThisPosition[i]) continue;
        for (int j=i*2;j<=LIMIT;j+=i)
        {
            keepThisPosition[j] = true;
        }
    }
}

int main()
{
    init();
    int n;
    cin >> n;

    vector<int> currBatch,nextBatch;
    for (int i=1;i<=n;i++)
    {
        int nr;
        cin >> nr;
        currBatch.push_back(nr);
    }
    int currSize = n;
    while (currSize>0)
    {
        for (int i=0;i<currSize;i++)
        {
            if (!keepThisPosition[i+1])
            {
                cout << currBatch[i] << ' ';
            }else
            {
                nextBatch.push_back(currBatch[i]);
            }
        }
        currBatch.clear();
        currBatch = nextBatch;
        nextBatch.clear();
        currSize = currBatch.size();
    }
    return 0;
}