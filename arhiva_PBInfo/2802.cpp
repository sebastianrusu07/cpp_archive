#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

struct student
{
    string nume, prenume;
    int sum;            // suma celor 3 medii
    double averageGrade;
};

int main()
{
    cout << fixed << setprecision(2);
    int n, q;
    cin >> n >> q;

    vector<student> students(n);
    long long total = 0;
    for (auto &s : students)
    {
        int a, b, c;
        cin >> s.nume >> s.prenume >> a >> b >> c;
        s.sum = a + b + c;
        s.averageGrade = s.sum / 3.0;
        total += s.sum;
    }
    double classAverageGrade = total / (3.0 * n);

    if (q == 1)
    {
        int count = 0;
        for (auto &s : students)
            if ((long long)s.sum * n >= total)
                count++;
        cout << count << '\n';
    }
    else
    {
        cout << classAverageGrade << '\n';
        sort(students.begin(), students.end(), [](const student &a, const student &b)
        {
            if (a.sum != b.sum) return a.sum > b.sum;
            if (a.nume != b.nume) return a.nume < b.nume;
            return a.prenume < b.prenume;
        });
        for (auto &s : students)
            cout << s.nume << ' ' << s.prenume << ' ' << s.averageGrade << '\n';
    }
    return 0;
}