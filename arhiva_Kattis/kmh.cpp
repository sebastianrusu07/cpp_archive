#include <iostream>
using namespace std;

int nextSpeedLimit(int n)
{
    while (n%10!=0)
    {
        n++;
    }
    return n;
}

int main()
{
    int n;
    cin >> n;

    int highest=0;
    for (int i=0;i<n;i++)
    {
        string speed;
        cin >> speed;

        if (speed=="/")
        {
            cout << highest;
        }else
        {
            int intSpeed = stoi(speed);
            highest=max(highest,nextSpeedLimit(intSpeed+1));
            cout << intSpeed;
        }
        cout << '\n';
    }
    return 0;
}