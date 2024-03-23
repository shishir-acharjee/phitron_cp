#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
#define ll long long
#define nl '\n'
using namespace std;
int main() {
    int t;
    cin >> t;
    unordered_map<char,int>b;
    string w="Timur";
    for(char c:w){
        b[c]++;
    }
    while (t--) {
        int cnt=0;
        int n; cin>>n;
        string s; cin>>s;
        unordered_map<char,int>a;
        if(n!=5){
            cout<<"NO\n";
        }
        else{
            for(int i = 0; i <n	; i++) {
               a[s[i]]++;
            }
            if(a==b) cout<<"YES\n";
            else cout<<"NO\n";
        }
        
    }
}