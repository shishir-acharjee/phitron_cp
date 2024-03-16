#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
using namespace std;
int main() {
    string s;
    cin>>s;
    int a[26]={0};
    for(char b: s){
        int x=b-'a';
        a[x]++;
    }
    for(int i = 0; i <	26; i++) {
        if(a[i]==0){
            cout<<char(i+'a');
            return 0;
        }
    }
    cout<<"None";
}