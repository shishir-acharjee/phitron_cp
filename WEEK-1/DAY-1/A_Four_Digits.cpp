#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
using namespace std;
int main() {
    string s;
    cin>>s;
    int ans=4-s.size();
    for(int i = 0; i <	ans; i++) {
        cout<<"0";
    }
    cout<<s;
}