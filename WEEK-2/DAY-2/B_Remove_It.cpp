#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
#define ll long long
#define nl '\n'
using namespace std;
int main() {
    int n,x; cin>>n>>x;
    vector<int>v;
    for(int i = 0; i <	n; i++) {
        int tmp; cin>>tmp;
        if(tmp!=x) v.push_back(tmp);
    }
    for(int val:v){
        cout<<val<<" ";
    }
}