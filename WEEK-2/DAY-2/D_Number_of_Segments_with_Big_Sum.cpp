#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
#define ll long long
#define nl '\n'
using namespace std;
int main() {
    ll n,s;
    cin>>n>>s;
    ll a[n];
    for(int i = 0; i <	n; i++) {
        cin>>a[i];
    }
    ll r=0,l=0,sum=0,cnt=0;
    while(r<n) {
        sum+=a[r];
        if(sum>=s){
            cnt+=1+(n-1-r);
            
            while(sum>=s) {
                sum-=a[l];
                l++;
                if(sum>=s){
                     cnt+=1+(n-1-r);
                }
                
            }

        }
        r++;
    }
    cout<<cnt<<nl;
}