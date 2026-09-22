#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
#include <bitset>
#include <set>
using namespace std;

struct student
{
    char gender;
    int height,originalPos;
};

int main()
{
    int studentCount;
    cin >> studentCount;

    vector<student> studentVector(studentCount);
    for (int i = 0; i < studentCount; i++)
    {
        cin >> studentVector[i].gender >> studentVector[i].height;
        studentVector[i].originalPos = i+1;
    }

    sort(studentVector.begin(),studentVector.end(),[](student a,student b)
    {
        if (a.gender == b.gender)
        {
           if (a.height != b.height)
           {
               return a.height > b.height;
           }
           return a.originalPos < b.originalPos;
        }
        return (a.gender == 'B');
    });

    for (int i=0;i<studentCount;i++)
    {
        cout << studentVector[i].originalPos << " ";
    }
    return 0;
}