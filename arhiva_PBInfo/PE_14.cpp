#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int maxLength = 0 ,champion = 0;
    for (int i=1; i<1000000; i++) {
        int length = 1;
        long long nr=i;
        while (nr!=1) {
            if (nr%2==0) {
                nr/=2;
            }else {
                nr=nr*3+1;
            }
            length++;
        }
        if (length>maxLength) {
            maxLength = length;
            champion = i;
        }
        //cout << "number " << i << " has the length " << length << endl;
    }
    cout << "but the winner is " << champion << " with " << maxLength;
    return 0;
}