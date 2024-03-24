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
        string s;
        cin>>s;
        stack<char>a;
        for(char c:s){
            if(a.empty()){
                a.push(c);
            }
            else{
                if(c==')'&&a.top()=='('){
                    a.pop();
                }
                else{
                    a.push(c);
                }
            }
        }
        cout<<(a.size()/2)<<nl;
    }
}