// missing number better approach
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout << "ENTER THE NUMBER :";
    cin >> n;
    int arr[n-1];
    int hash[n+1] = {0};
    cout << "ENTER THE ELEMENTS OF THE ARRAY ";
    for (int i =0 ; i<n-1 ;i++){
        cin >> arr[i];
    }
    for (int i =1; i<=n ; i++){
        for (int j =0 ; j<n-1 ; j++){
            if (arr[j]==i){
                hash[arr[j]]++;
            }
        }
        // finding the missing element 
        if (hash[i]==0) cout << "MISSING ELEMENT : " << i;
    }
    // for (int i =0 ;i<n+1;i++){
    //     cout << "HASH ARRAY : "<< hash[i] << endl;
    // }
}






