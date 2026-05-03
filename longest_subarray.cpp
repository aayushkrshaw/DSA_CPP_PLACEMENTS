// Longest Subarray with sum k
// Optimal approach

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[9]={1,2,3,1,1,1,1,3,3};
    int n = 9;
    int k =6;
    int left = 0 , right = 0;
    long long sum = arr[0];
    int maxLen = 0;
    while (right < n){
        while (left<=right && sum > k){
            sum = sum - arr[left];
            left ++;
        }
        if (sum ==k){
            maxLen = max(maxLen , right - left +1);
        }
        right++;
        if (right < n) sum = sum + arr[right];
    }
    cout << "Longest Subarray with sum 6 is : " << maxLen;

}
