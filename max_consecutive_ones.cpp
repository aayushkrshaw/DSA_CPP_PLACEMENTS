#include<bits/stdc++.h>
using namespace std;
int max_consecutive(int arr[],int n){
    int maxi=0;
    int cnt=0;
    for (int i=0;i<n;i++){
        if (arr[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else {
            cnt = 0;// counter resets to zero 
        }
    }
    return maxi;

}
int main(){
    int n = 19;
    int arr[n]={1,1,0,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,0};
    int answer = max_consecutive(arr,n);
    cout << "MAXIMUM CONSECUTIVE TIMES IS : ---> " << answer;

}
