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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int dis=0;
        map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        for(auto it:mp){
            if(it.second%2==1)dis++;
        }
        int remain=n-dis;

         
        if(dis<=k){
            cout<<"YES\n";
        }
        else if(dis-1==k&&remain%2==0){
                cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}