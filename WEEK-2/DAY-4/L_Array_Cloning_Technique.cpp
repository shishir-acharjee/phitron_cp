#include <iostream>
#include <algorithm>
#define ll long long
#define nl '\n'
using namespace std;

const int MAX_RANGE = 2e9 + 1; 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i <	n; i++) {
            cin>>a[i];
        }
        sort(a,a+n);
        int mx=1,cn=1;
        for(int i = 1; i <	n; i++) {
            if(a[i]==a[i-1]){
                cn++;
            }
            else{
                mx=max(cn,mx);
                cn=1;
            }
        }
          mx=max(cn,mx);
        int swap = n - mx;
        int op = 0;
        int cnt = 0;
        while (op < swap) {
            op += mx;
            cnt++;
            mx *= 2;
        }
        cout << swap + cnt << nl;
    }
    return 0;
}
