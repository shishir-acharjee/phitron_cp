#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    cout<<max(max(a+b,a+a-1),b+b-1);
}