#include <string>
#include <algorithm>

bool PM(int num)
{
    string imACheater = to_string(num);
    string retaehCAmi = imACheater;
    reverse(retaehCAmi.begin(), retaehCAmi.end());
    if (imACheater != retaehCAmi)
    {
        return false;
    }

    bool descending = false;
    for (int i=1; i<imACheater.length(); i++)  //12521 false
    {
        if (imACheater[i-1] == imACheater[i]) return false;
        if (imACheater[i-1] < imACheater[i])
        {
            if (descending)
            {
                return false;
            }
        }else
        {
            if (!descending)
            {
                descending = true;
            }
        }
    }
    return true;
}