#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;

    vector<int> answers;

    for (int i = 1; i <= k; i++)
    {
        int n;
        cin >> n;
        vector<int> vector;
        bool flag = true;
        for (int j = 1; j <= n; j++)
        {
            int nr;
            cin >> nr;
            vector.push_back(nr);
        }
        for (int j = 1; j < vector.size(); j++)
        {
            int prev=vector[j-1];
            if (prev>vector[j])
            {
                flag = false;
            }
        }
        answers.push_back(flag);
    }
    for (int i = 0; i < answers.size(); i++)
    {
        cout << answers[i] << " ";
    }
}