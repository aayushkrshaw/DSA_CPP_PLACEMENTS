#include<bits/stdc++.h>
using namespace std;
void intersection_array(int arr1[],int arr2[],int n,int m){
    int i=0;
    int j=0;
    

}
int main(){
    cout << "ENTER THE NUMBER OF ELEMENTS IN FIRST ARRAY : ";
    int n;
    cin >> n;
    int arr1[n];
    cout << "ENTER THE ELEMENTS OF FIRST ARRAY : ";
    for (int i=0;i<n;i++){
        cin >> arr1[i];
    }
    cout << "ENTER THE NUMBER OF ELEMENTS IN SECOND ARRAY : ";
    int m;
    cin >> m;
    int arr2[m];
    cout << "ENTER THE ELEMENTS OF SECOND ARRAY : ";
    for (int i=0;i<m;i++){
        cin >> arr2[i];

    }
    intersection_array(arr1,arr2,n,m);

}
