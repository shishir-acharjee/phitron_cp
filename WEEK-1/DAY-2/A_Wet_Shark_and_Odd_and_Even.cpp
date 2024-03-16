#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
#define ll long long int 
using namespace std;
int main() {
    ll n;
    cin>>n;
    ll total=0;
    vector<int>v;
    for(int i = 0; i <	n; i++) {
        ll tmp; cin>>tmp;
        if(tmp%2==0){
            total+=tmp;
        }
        else{
            v.push_back(tmp);
        }
    }
    sort(v.begin(),v.end(),greater<int>());
    int sz=v.size();
    if(sz%2!=0){
        sz--; 
    }
    for(int i = 0; i <	sz; i++) {
        total+=v[i];
    }
    cout<<total;
}