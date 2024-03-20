#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i = 0; i <	n; i++) {
        cin>>a[i];
    }
    for(int i = 0; i <	m; i++) {
        cin>>b[i];
    }
    long long int l=0,r=0;
    long long int ans=0;
    
      while(l<n&&r<m) {
        long long int ll=l,rr=r;
     long long  int  cur1=0,cur2=0;
        while(b[r]==a[ll]&&ll<n) {
            cur1++;
            ll++;
        }
        while(a[l]==b[rr]&&rr<m) {
            cur2++; rr++;
        }
     
        ans+=(cur1*cur2);
       
       if(ll-l==0||rr-r==0){
           if(a[l]<b[r]){
              l++;
           }
           else{
            r++;
           }
       }
       else{
           l=ll;
           r=rr;
       }

        
      }
    cout<<ans<<endl;
}