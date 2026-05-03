// missing number brute force
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS :";
    cin>>n;
    int arr[n-1];
    cout << "ENTER THE ELEMENTS :";
    for (int i =0 ; i<n-1 ; i++){
        cin >> arr[i];

    }
    for (int i = 1 ; i<=n ; i++){
        int flag =0;
        for (int j =0 ; j<n-1 ; j++){
            if (arr[j] == i){
                flag = 1;
                break;
            }
        }
        if (flag ==0) cout << "MISSING ELEMENT " << i;
    }
}

