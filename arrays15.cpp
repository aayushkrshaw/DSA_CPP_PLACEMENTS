// find the number that appears once and other twice .....
// brute force

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7]={1,1,2,3,3,4,4};
    int n = 7;
    for (int i =0;i<n;i++){
        int num = arr[i];
        int count =0;
        for (int i =0; i<n;i++){
            if (num==arr[i]){
                count++;
            }
        }
        if (count ==1){
            cout << "THE NUMBER THAT APPEARS ONCE IS : "<< num;
        }
    }
}

              
