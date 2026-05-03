#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS : ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ELEMENTS ";
    for (int i =0;i<n;i++){
        cin >> arr[i];
    }
    int XOR =0;
    for (int i =0; i<n ; i++){
        XOR = XOR ^ arr[i];
    }
    cout << "NUMBER THAT APPEARS ONCE " << XOR ;
}