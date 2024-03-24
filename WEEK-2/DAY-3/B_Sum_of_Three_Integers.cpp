#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
#define ll long long
#define nl '\n'
using namespace std;
int main() {
    int k,s;
    cin>>k>>s;
    int cnt=0;
    for(int i = 0; i <=k; i++) {
        for(int j = 0; j <=k; j++) {
            int w=s-i-j;
            if(w<=k&&w>=0){
                cnt++;
            }
        }
    }
    cout<<cnt;
}