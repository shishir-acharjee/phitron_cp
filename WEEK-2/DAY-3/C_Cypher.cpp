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
       vector<int>v(n);
       for(int i = 0; i <	n; i++) {
        cin>>v[i];
       }
       for(int i = 0; i <	n; i++) {
             int tmp; cin>>tmp;
             while(tmp--) {
                char c;
                cin>>c;
                if(c=='D'){
                    v[i]++;
                }
                else{
                    v[i]--;
                }
                
             }
       }
       for(int val:v){
        cout<<(val+10)%10<<" ";
       }
       cout<<nl;

    }
}