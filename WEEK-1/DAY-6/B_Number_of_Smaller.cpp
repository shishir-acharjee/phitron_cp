#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
using namespace std;
int main() {
     ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m; cin>>n>>m;
    int a[n],b[m];
    for(int i = 0; i <	n; i++) {
        cin>>a[i];
    }
    for(int i = 0; i <	m; i++) {
        cin>>b[i];
    }
    int f=0,s=0,ans=0;
     while(s<m) {
        while(b[s]>a[f]&&f<n) {
            ans++;
            f++;
        }
        cout<<ans<<" ";
        s++;
        
     }
   cout << '\n';
}