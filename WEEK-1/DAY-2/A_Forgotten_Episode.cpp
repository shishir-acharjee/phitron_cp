#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
using namespace std;
int main() {
    int n;
    cin>>n;
    bool fr[n+1]={false};
    for(int i = 0; i <	n; i++) {
        int temp;
        cin>>temp;
        fr[temp]=true;
    }
    for(int i = 1; i <=n	; i++) {
        if(!fr[i]){
            cout<<i;
            break;
        }
    }
}