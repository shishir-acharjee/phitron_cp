#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
#define ll long long
#define nl '\n'
using namespace std;
int main() {
    string s,ss;
    cin>>s>>ss;
    int cnt=0;
    for(int i = 0; i <	s.size(); i++) {
        if(s[i]!=ss[i])cnt++;
    }
    cout<<cnt;
}