#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
    for (int i=0;i<=n-2;i++){
        int mini=i;
        for (int j=i;j<=n-1;j++){
            if (arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];// smaller one.........
        arr[mini]=arr[i];// smaller is replaced by bigger........
        arr[i]=temp;// bigger is replaced by smaller ........
    }
}
int main(){
    cout<<"ENTER THE NUMBER OF ELEMENTS :";
    int n;
    cin >> n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS :";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    selection_sort(arr,n);
    cout << "Sorted Array is : ";
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}

