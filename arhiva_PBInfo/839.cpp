#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
using namespace std;

int n;
int arr[1005];

bool allTreesDown(int k=0){
    if(k==n-1){
        return arr[k]==0;
    }
    return (arr[k] == 0) && allTreesDown(k+1);
}

pair<int,int> findInterval(){
    int a=0;
    while(arr[a]==0) a++;
    int b=a;
    while(arr[b]!=0) b++;
    b--;

    pair<int,int> ans;
    ans.first = a;
    ans.second = b;
    return ans;
}

int smallestInInterval(int a,int b){
    if(a==b){
        return arr[a];
    }
    return min(arr[a],smallestInInterval(a+1,b));
}

void subtract(int lengthCut,int a,int b){
    if(a==b){
        arr[a]-=lengthCut;
        return;
    }
    arr[a]-=lengthCut;
    subtract(lengthCut,a+1,b);
}

int vraja(int ans=0){
    if(allTreesDown()){
        return 0;
    }
    pair<int,int> interval = findInterval();
    int target = smallestInInterval(interval.first,interval.second);
    subtract(target,interval.first,interval.second);
    return 1 + vraja();
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << vraja();
    return 0;
}