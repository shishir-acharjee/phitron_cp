//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
         vector<long long>ans;
         long long l=0,r=0;
         long long cnt=0;
         long long w=0;
         bool flag=true;
        vector<pair<long long,long long>>pq;
        while(r<N){
          if(A[r]<0){
              pq.push_back({r,A[r]});
          }
          if(r-l+1==K){
            
             if(pq.size()>w){
                 if(pq[w].first>=l&&pq[w].first<=r){
                     ans.push_back(pq[w].second);
                    if(l+1>pq[w].first)w++;
                 }
                 else{
                     ans.push_back(0);
                 }
             }
             else{
                  ans.push_back(0); 
             }
              l++; r++;
          }
          else{
              r++;
          }
            
            
        }
    return ans;
                                                 
 }