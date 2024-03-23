//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    int n=txt.size();
	    int m=pat.size();
	     unordered_map<char,int>mp;
        for(char c:pat){
            mp[c]++;
        }
        unordered_map<char,int>mpp;
        long long r=0,l=0; int cnt=0;
        while(r<n){
            mpp[txt[r]]++;
            if(r-l+1==m){
                if(mpp==mp) cnt++;
                mpp[txt[l]]--;
                if(mpp[txt[l]]==0){
                     mpp.erase(txt[l]);
                }
               
                l++; r++;
            }
            else{
                r++;
            }
        }
        return cnt;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends