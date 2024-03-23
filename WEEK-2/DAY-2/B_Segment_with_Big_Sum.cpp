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
    ll l=0,r=0,ans=-1,sum=0;
    while(r<n) {
        sum+=a[r];
        if(sum>=s){
            if(ans==-1)ans=r-l+1;
            ans=min(ans,r-l+1);
            while(sum>=s) {
                sum-=a[l];
                l++;
                if(sum>=s)ans=min(ans,r-l+1);
            }
           
        }
        r++;
    }
    cout<<ans<<nl;
}