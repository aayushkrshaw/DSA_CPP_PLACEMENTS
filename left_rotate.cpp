#include<bits/stdc++.h>
using namespace std;
void leftrotate_array(int arr[],int n,int k){
    vector<int>temp;
    k=k%n;
    for (int i=0;i<k;i++){
        temp.push_back(arr[i]);
    }
    for (int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    int j=0;
    for (int i=n-k;i<n;i++){
        arr[i]=temp[j];
        j++;
    }

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