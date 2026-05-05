//Better approach using hashing
#include<bits/stdc++.h>
using namespace std;
int missing_number(int arr[],int n){
    int sum = n*(n+1)/2;
    int arrsum =0;
    for (int i=0;i<n-1;i++){
        arrsum =arrsum + arr[i];
    }
    int missing_num = sum - arrsum;
    return missing_num;

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

