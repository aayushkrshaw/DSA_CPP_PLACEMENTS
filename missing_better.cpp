//Better approach using hashing
#include<bits/stdc++.h>
using namespace std;
int missing_number(int arr[],int n){
    int hash[n+1] ={0};
    for (int i=0;i<n-1;i++){
        hash[arr[i]]=1;
    }
    for (int j=1;j<=n;j++){
        if (hash[j]==0) return j;
    }
}
int main(){
    int n;
    cout << "ENTER THE VALUE OF N :";
    cin >> n;
    int arr[n-1];
    cout << "ENTER THE ELEMENTS :";
    for (int i=0;i<n-1;i++){
        cin >> arr[i];
    }
    int answer = missing_number(arr,n);
    cout << "MISSING NUMBER : "<< answer;
}

