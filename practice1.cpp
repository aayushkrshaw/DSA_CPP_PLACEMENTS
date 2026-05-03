#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[9]={1,2,3,1,1,1,1,3,3};
    int n = 9;
    int k = 6;
    int right = 0, left = 0;
    int sum = arr[0];
    int MaxLen = 0;
    while (right < n){
      
        while ((sum > k) && (left <=right )){
            sum = sum - arr[left];
            left++;
        }
        if (sum == k){
            MaxLen = max( MaxLen , right - left +1);
        }
        right ++;
        if (right < n){
            sum = sum + arr[right];
        }
    }
    cout << "LENGTH OF LONGEST SUBAARAY WITH SUM " << k << " IS " << MaxLen;

}
