#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int max=0;
        for(int i = 1; i <=	n; i++) {
            int temp;
            cin>>temp;
            int ans=temp-i;
            if(ans>max){
                max=ans;
            }
        }
        cout<<max<<endl;
    }
}