#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long calculate(string expression)
{
    vector<long long> numbers,operators;
    string buildNumber;
    bool nextIsNegative = false;
    for (long long i = 0; i < expression.length(); i++)
    {
        switch (expression[i])
        {
            case '+':
                {
                    if (buildNumber.empty()) break;
                    if (!nextIsNegative)numbers.push_back(stoll(buildNumber));
                    else numbers.push_back(-stoll(buildNumber));
                    nextIsNegative = false;
                    operators.push_back(1);
                    buildNumber.clear();
                    break;
                }
            case '-':
                {
                    if (!buildNumber.empty())
                    {
                        if (!nextIsNegative)numbers.push_back(stoll(buildNumber));
                        else numbers.push_back(-stoll(buildNumber));
                        nextIsNegative = false;
                        operators.push_back(2);
                        buildNumber.clear();
                    }
                    else
                    {
                        nextIsNegative = true;
                    }
                    break;
                }
            case '*':
                {
                    if (buildNumber.empty()) break;
                    if (!nextIsNegative)numbers.push_back(stoll(buildNumber));
                    else numbers.push_back(-stoll(buildNumber));
                    nextIsNegative = false;
                    operators.push_back(3);
                    buildNumber.clear();
                    break;
                }
            default :
                {
                    buildNumber += expression[i];
                }
        }

    }
    if (!nextIsNegative)numbers.push_back(stoll(buildNumber));
    else numbers.push_back(-stoll(buildNumber));

    for (long long i = 0;i < operators.size();i++)
    {
        if (operators[i]==1 || operators[i]==2) continue;

        numbers[i] = numbers[i] * numbers[i+1];
        numbers.erase( numbers.begin()+i+1);
        operators.erase(operators.begin()+i);
        i--;
    }

    long long total=numbers[0];
    for (long long i = 1; i < numbers.size(); i++)
    {
        total += numbers[i] * (operators[i-1]==2?-1:1);
    }
    return total;
}

long long evaluate(string input)
{
    string finalExpression;
    for (long long i = 0; i < input.length(); i++)
    {
        if (input[i]=='(')
        {
            long long k=i;
            long long depth=1;
            while (depth>0)
            {
                k++;
                if(input[k]=='(') depth++;
                if(input[k]==')') depth--;
            }
            string section = input.substr(i+1, k-i-1);
            long long result = evaluate(section);
            finalExpression += to_string(result);
            i=k;
        }else
        {
            finalExpression += input[i];
        }
    }
    return calculate(finalExpression);
}

int main()
{
    string input;
    cin>>input;
    cout << evaluate(input);
    return 0;
}