// find the number that appears once and others twice
// better approach using hashing
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[n];
    cout << "ENTER THE NUMBER OF ELEMENTS :";
    cin>>n;
    cout << "ENTER THE ELEMENTS OF THE ARRAY :";
    for (int i =0 ; i<n ;i++){
        cin >> arr[i];
    }
    int maxi=arr[0];
    for (int i=0 ; i<n;i++){ //O(n)
        maxi=max(maxi,arr[i]);
    }
    int hash[maxi]={0};
    for (int i =0;i<n;i++){ //O(n)
        hash[arr[i]]++;
    }
    for (int i =0;i<n;i++){ // O(n)
        if (hash[arr[i]]==1){
            cout << "number that appears once : " << arr[i];
        }
    }

}
