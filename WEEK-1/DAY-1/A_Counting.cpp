#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int ans=b-a+1;
    if(ans<0){
        cout<<0;
    }
    else{
        cout<<ans;
    }
}