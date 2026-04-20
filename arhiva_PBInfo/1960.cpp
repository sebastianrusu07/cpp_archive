#include <iostream>
using namespace std;

int main() {

    unsigned long long perfect[] = {6ULL,28ULL,496ULL,8128ULL,33550336ULL,8589869056ULL,137438691328ULL,2305843008139952128ULL};

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        unsigned long long nr;
        cin >> nr;
        for (auto it : perfect)
        {
            if (nr == it)
            {
                cout << 1 << ' ';
                break;
            }else
            {
                if (nr < it)
                {
                    cout << 0 << ' ';
                    break;
                }
            }
        }
    }

    return 0;
}