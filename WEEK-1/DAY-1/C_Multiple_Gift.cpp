#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long int 
int main() {
    ll a,b;
    cin>>a>>b;
    ll cnt=0;
    for(ll i = a; i <=	b; i=i*2) {
        cnt++;
    }
    cout<<cnt;
}