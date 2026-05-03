// BRUTE FORCE

// #include<bits/stdc++.h>
// using namespace std;
// void union_array(int arr1[],int arr2[],int n,int m){
//     set<int>st;
//     for (int i=0;i<n;i++){
//         st.insert(arr1[i]);
//     }
//     for (int i=0;i<m;i++){
//         st.insert(arr2[i]);
//     }
//     vector<int> answer;
//     for (auto it : st){
//         answer.push_back(it);
//     }
//     for (int i=0;i<answer.size();i++){
//         cout << answer[i];
//     }

// }
// int main(){
//     cout << "ENTER THE NUMBER OF ELEMENTS IN FIRST ARRAY : ";
//     int n;
//     cin >> n;
//     int arr1[n];
//     cout << "ENTER THE ELEMENTS OF FIRST ARRAY : ";
//     for (int i=0;i<n;i++){
//         cin >> arr1[i];
//     }
//     cout << "ENTER THE NUMBER OF ELEMENTS IN SECOND ARRAY : ";
//     int m;
//     cin >> m;
//     int arr2[m];
//     cout << "ENTER THE ELEMENTS OF SECOND ARRAY : ";
//     for (int i=0;i<m;i++){
//         cin >> arr2[i];
//     }
//     union_array(arr1,arr2,n,m);

// }

// OPTIMAL APPROACH
#include<bits/stdc++.h>
using namespace std;
void union_array(int arr1[],int arr2[],int n,int m){
    int i=0;
    int j=0;
    vector<int>unionarr;
    while (i<n && j<m){
    
        if (arr1[i]<arr2[j]){
            if ((unionarr.size()==0) || (unionarr.back()!=arr1[i])){
                unionarr.push_back(arr1[i]);
            }
            i++;
        }
        else {
            if (unionarr.size()==0 || unionarr.back()!=arr2[j]){
                unionarr.push_back(arr2[j]);
            }
            j++;
        }
        
    }
    while (i<n){
        if (unionarr.size()==0 || unionarr.back()!=arr1[i] ){
            unionarr.push_back(arr1[i]);
        }
        i++;
    }
    while (j<n){
        if (unionarr.size()==0 || unionarr.back()!=arr2[j]){
                unionarr.push_back(arr2[j]);
        }
        j++;
    }
    cout << "UNION OF TEO SORTED ARRAY IS :";
    for (int i=0;i<unionarr.size();i++){
        cout << unionarr[i];
    }
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
    union_array(arr1,arr2,n,m);

}






