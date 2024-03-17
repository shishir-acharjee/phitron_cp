#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
#define ll long long int
using namespace std;
int main() {
    ll s,t;
    cin>>s>>t;
    int rg=min(s,t);
    ll cnt=0;
    for(int i =0; i <=s; i++) {
        for(int j = 0; j <= s; j++) {
            for(int k=0;k<=s;k++){
                if(i+j+k<=s && i*j*k<=t){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
}