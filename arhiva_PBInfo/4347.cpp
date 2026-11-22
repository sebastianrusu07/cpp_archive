#include <fstream>
#include <string>
using namespace std;

ifstream cin("matematica.in");
ofstream cout("matematica.out");

void fixExpression(string& exp)
{
    for (int i=0; i<exp.length(); i++)
    {
        if (!isdigit(exp[i]) && !isdigit(exp[i+1]))
        {
            if (exp[i] == '-' && exp[i+1] == '-')
            {
                exp[i] = '+';
            }else if (exp[i] == '-' && exp[i+1] == '+')
            {
                exp[i] = '-';
            }else if (exp[i] == '+' && exp[i+1] == '-')
            {
                exp[i] = '-';
            }else
            {
                exp[i] = '+';
            }
            exp.erase(i+1, 1);
        }
    }
}

long long evaluateExpression(string exp,long long& smallestNegative)
{
    exp+='+'; // to perform the final calculation
    smallestNegative = 0;
    long long sum = 0,smallestPositive = 1e9;
    int len = exp.length();
    string buildNumber = "";
    bool isNegative = false;
    for (int i = 0; i < len; i++)
    {
        if (exp[i] == '+' || exp[i] == '-')
        {
            if (!buildNumber.empty())
            {
                if (isNegative)
                {
                    smallestNegative = max(smallestNegative,stoll(buildNumber)); //max because we store absolute value
                    sum -= stoll(buildNumber);
                }else
                {
                    smallestPositive = min(smallestPositive,stoll(buildNumber));
                    sum += stoll(buildNumber);
                }
                buildNumber.clear();
            }
            switch (exp[i])
            {
                case '+':
                    {
                        isNegative = false;
                        break;
                    }
                case '-':
                    {
                        isNegative = true;
                        break;
                    }
            }
        }else
        {
            buildNumber+=exp[i];
        }
    }
    if (smallestNegative == 0)
    {
        smallestNegative = -smallestPositive; //in case of there being no negative numbers
    }
    return sum;
}

int main()
{
    int trackSmallestNegative;
    cin >> trackSmallestNegative;
    trackSmallestNegative -= 1;

    string exp;
    cin >> exp;
    fixExpression(exp);

    long long smallestNegative;
    long long result = evaluateExpression(exp,smallestNegative);
    if (trackSmallestNegative)
    {
        result += 2*smallestNegative;
    }

    cout << result;
    return 0;
}
