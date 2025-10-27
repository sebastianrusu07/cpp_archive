#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
#include <list>
using namespace std;

void cifminmax(int nr,int &M,int &m)
{
    M=0;
    m=9;
    do{
        int c=nr%10;
        M=max(M,c);
        m=min(m,c);
        nr/=10;
    }while (nr);
}