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
        char c; cin>>c;
        string s; cin>>s;
        if(c=='g'){

            cout<<0<<endl;
        }
        else{
            int cur;
            bool flag=true;
            int tag=0;
            int now=0;
            bool track=true;
            for(int i = 0; i <	s.size(); i++) {
                if(s[i]==c &&flag){
                    cur=i;
                    flag=false;
                }
                else if(s[i]=='g'){
                    if(track){
                         tag=i;
                         track=false;
                    }
                    int w=i-cur;
                    if(w>now&&flag==false){
                        now=w;
                        
                    }
                    flag=true;
                    cur=-1;
                }
                
               
            }
           
            if(cur!=-1){
                int ans=n-cur+tag;
                
                now =max(ans,now);
            }
            cout<<now<<endl;

        }

    }
}