// STRING HASHING
// FOR LOWERCASE LETTERS

#include<bits/stdc++.h>
using namespace std;
int main(){ 
    string s;
    cin >> s;
    int hash[26] = {0};
    for (int i =0 ; i< s.size() ; i++){
        hash[s[i] - 'a']+=1;

    }
    int query;
    cin >> query;
    while(query--){
        char c;
        cin >> c;
        cout << "NUMBER OF TIMES "<< c << " APPEARS IS " << hash[c - 'a']<< endl;
    }

}

