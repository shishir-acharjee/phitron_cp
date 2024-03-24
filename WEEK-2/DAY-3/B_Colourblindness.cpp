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
    while (t--) {
        int n; cin>>n;
        string a,b;
        cin>>a>>b;
        for(int i = 0; i <n; i++) {
            if(a[i]=='G') a[i]='B';
        }
        for(int i = 0; i <n; i++) {
            if(b[i]=='G') b[i]='B';
        }
        if(a==b)cout<<"YES\n";
        else cout<<"NO\n";
    }
}