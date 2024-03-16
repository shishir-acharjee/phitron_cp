#include <bits/stdc++.h>
using namespace std;
int dp[10000];
bool knapsack(int a,int b,int w,int i)
{
   if(i>w){
    return false;
   }
   if(i==w){
    return true;
   }
   if(dp[i]==1){
    return true;
   }
   if(dp[i]==0){
    return false;
   }
   bool op1=knapsack(a,b,w,i+a);
   bool op2=knapsack(a,b,w,i+b);
   if(op1||op2){
      dp[i]=1;
   }
   else{
    dp[i]=0;
   }
   return op1||op2;
 
}
int main()
{
    int a,b,w;
    cin>>a>>b>>w;
    for(int i = 0; i<=w; i++) {
        dp[i]=-1;
    }
    if(knapsack(a,b,w,0)){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    return 0;
}