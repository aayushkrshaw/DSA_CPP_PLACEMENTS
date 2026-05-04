#include<bits/stdc++.h>
using namespace std;
int missing_number(int arr[],int n){
    for (int i=1;i<=n;i++){
        int flag =0;
        for(int j=0;j<n-1;j++){
            if (arr[j]==i){
                flag=1;
                break;
            }
        }
        if (flag==0) return i;
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

