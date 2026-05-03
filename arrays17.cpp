// find the number that appears once and others twice
// using map data structure

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<long long , int> mpp;
    for (int i =0;i<n;i++){
        mpp[arr[i]]++; // N log M
    }
    for (auto it : mpp){
        if (it.second == 1){ // it.second is the value
            cout << "number that appears once" << it.first; // it.first is the key
        }
    }

}