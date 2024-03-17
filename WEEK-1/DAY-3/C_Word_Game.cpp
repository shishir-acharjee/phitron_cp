#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string a[n],b[n],c[n];
        map<string,int>mp;
        for(int i = 0; i <	n; i++) {
            cin>>a[i];
            mp[a[i]]++;
        }
        for(int i = 0; i <	n; i++) {
            cin>>b[i];
            mp[b[i]]++;
        }
        for(int i = 0; i <	n; i++) {
            cin>>c[i];
            mp[c[i]]++;
        }
        int aa=0,bb=0,cc=0;
    for(int i = 0; i <	n; i++) {
          if(mp[a[i]]==1){
            aa+=3;
          }
          else if(mp[a[i]]==2){
            aa+=1;
          }
          if(mp[b[i]]==1){
            bb+=3;
          }
          else if(mp[b[i]]==2){
            bb+=1;
          }
          if(mp[c[i]]==1){
            cc+=3;
          }
          else if(mp[c[i]]==2){
            cc+=1;
          }


    }
       
cout<<aa<<" "<<bb<<" "<<cc<<endl;


    }
}