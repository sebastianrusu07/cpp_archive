#include <fstream>
#include <vector>
#include <string>
using namespace std;

ifstream cin("pachete.in");
ofstream cout("pachete.out");

int posOfNumber[105];

int main()
{
    int n;
    cin>>n;

    int numbers[105];
    for(int i=1;i<=n;i++)
    {
        cin>>numbers[i];
        posOfNumber[numbers[i]]=i;
    }
    numbers[n+1]=0;

    int emptyIdx = n+1;
    vector<string> moves;
    for(int i=1;i<=n;i++)
    {
        if (numbers[i]==i) continue;
        if (numbers[i]==0)
        {
            moves.push_back(to_string(posOfNumber[i]) + ' ' + to_string(i));
            numbers[posOfNumber[i]]=0;
            emptyIdx=posOfNumber[i];
            posOfNumber[i]=i;
            numbers[i]=i;
        }else
        {
            moves.push_back(to_string(i) + ' ' + to_string(emptyIdx));
            numbers[emptyIdx]=numbers[i];
            posOfNumber[numbers[i]]=emptyIdx;
            numbers[i]=0;
            emptyIdx=i;
            i--;
        }
    }
    cout << moves.size() << '\n';
    for (string move : moves)
    {
        cout << move << '\n';
    }
    return 0;
}