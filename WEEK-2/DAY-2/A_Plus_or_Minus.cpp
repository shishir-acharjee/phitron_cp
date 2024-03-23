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
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c)cout<<"+\n";
        else cout<<"-\n";
    }
}