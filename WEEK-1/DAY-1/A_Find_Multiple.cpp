#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int ans=min(a,b)/c;
    if(min(a,b)%c==0 ){
        cout<<ans*c;
    }
    else if((ans+1)*c<=max(a,b)){
        cout<<(ans+1)*c;
    }
    else{
        cout<<-1;
    }
}