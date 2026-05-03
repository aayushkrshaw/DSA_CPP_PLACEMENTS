// INTERSECTION OF TWO SORTED ARRAYS 
// OPTIMAL 
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector <int> ans;
    int arr1[8]={1,2,2,3,3,4,5,6};
    int arr2[7]={2,3,4,5,6,67};
    int n1 = 8;
    int n2 = 7;
    int i = 0 , j=0;
    while (i<n1 && j<n2 ){
        if (arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr1[i]){
            j++;
        }
        // Nor they are smaller nor greater so they are equal in values...
        else {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    cout << "FINAL ELEMENTS :";
    for (int i = 0 ; i<ans.size() ; i++){
        cout << ans[i] << " ";
    }
}
