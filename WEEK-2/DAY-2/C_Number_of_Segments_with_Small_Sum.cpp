#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
#define ll long long
#define nl '\n'
using namespace std;
 
int main() {
       ll n,s; cin>>n>>s;
       ll a[n];
       for(int i = 0; i <n	; i++) {
            cin>>a[i];
       }
       ll l=0,r=0,cnt=0,sum=0;
       bool flag=true;
       while(r<n) {
            sum+=a[r];
          if(sum>s){
               while(l<=r&&sum>s) {
                   sum-=a[l];
                   l++;
               }
               if(sum<=s){
                  cnt+=r-l+1;
               }
        
          }
          else{
               cnt+=r-l+1;
        
          }
             r++;
        
       }
       cout<<cnt;
}