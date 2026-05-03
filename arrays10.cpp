// UNION OF TWO SORTED ARRAYS
// OPTIMAL APPROACH
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int arr1[8]={1,1,2,3,4,5,8,9};
    int arr2[8]={2,3,4,4,5,6,7,57};
    int n1=8;
    int n2=8;
    int i=0,j=0;
    vector<int> unionArr ;
    while (i<n1 && j<n2){
        if (arr1[i]<=arr2[j]){
            if (unionArr.size()==0 || unionArr.back() != arr1[i]){
            unionArr.push_back(arr1[i]);
        }
        i++;
    }
        else{
            if (unionArr.size()==0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
        }
        j++;
    }
    }
    while (j<n2){
        if (unionArr.size()==0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
        }
        j++;
    }
    while (i<n1){
        if (unionArr.size()==0 || unionArr.back() != arr1[i]){
            unionArr.push_back(arr1[i]);
        }
        i++;

    }
    cout << "UNION OF TWO SORTED ARRAYS IS : ";
    for (int i = 0 ; i<unionArr.size();i++){
        cout << unionArr[i] << " ";
    }
}



