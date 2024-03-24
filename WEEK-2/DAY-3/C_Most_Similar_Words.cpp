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
        int n,m; cin>>n>>m;
        string s[n];
        for(int i = 0; i <	n; i++) {
            cin>>s[i];
        }
       
      
       int min=INT_MAX;
       for(int i = 0; i <	n; i++) {
          for(int j = i+1; j < n; j++) {
              int total=0;
              int tmp=0;
               while(tmp<m) {
                   total+=abs(s[i][tmp]-s[j][tmp]);
                   tmp++;
               }
               if(total<min)min=total;
          }
       }
  cout<<min<<nl;
    }
}