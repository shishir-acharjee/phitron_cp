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
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i <	n; i++) {
            cin>>a[i];
        }
        sort(a,a+n);
         int dis=0;
    for(int i = 0; i <	n; i++) {
        if(i==0)dis++;
       else if(a[i]!=a[i-1])dis++;
    }
    int same=n-dis;
    if(same%2==0)cout<<dis<<nl;
    else cout<<dis-1<<nl;


    }
}