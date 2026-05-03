#include<bits/stdc++.h>
using namespace std;
void leftrotate_array(int arr[],int n,int k){
    reverse(arr,arr+n-k);
    reverse(arr+n-k,arr+n);
    reverse(arr,arr+n);
}
int main(){
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS : ";
    cin >> n;
    cout << "ENTER THE VALUE OF K: ";
    int k;
    cin >> k;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    leftrotate_array(arr,n,k);
    cout << "ROTATED ARRAY IS : ";
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

