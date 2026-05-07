#include<bits/stdc++.h>
using namespace std;
int missing_number(int arr[],int n){
    int XOR1 =0;
    for (int i=1;i<=n;i++){
        XOR1=XOR1^i;
    }
    int XOR2=0;
    for (int i=0;i<n-1;i++){
        XOR2=XOR2^arr[i];
    }
    return XOR1^XOR2;
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