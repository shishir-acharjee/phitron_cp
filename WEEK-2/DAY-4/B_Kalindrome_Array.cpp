#include <iostream>
#include <algorithm>
#include <utility>
#define ll long long
#define nl '\n'
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int l = 0, r = n - 1;
        pair<int,int> ans = {-1, -1};
        bool flag = true, track = true;
        
        while (l < r) {
            if (a[l] != a[r] && flag) {
                ans.first = a[l];
                ans.second = a[r];
                flag = false;
            }
            l++;
            r--;
        }
        
        if (flag) {
            cout << "YES\n";
        } else {
            l = 0;
            r = n - 1;
            while (l < r) {
                while (a[l] == ans.first) {
                    l++;
                }
                while (a[r] == ans.first) {
                    r--;
                }
                if (a[l] != a[r]) {
                    track = false;
                    break;
                }
                l++;
                r--;
            }
            l = 0;
            r = n - 1; 
            bool prack=true;
            while (l < r) {
                while (a[l] == ans.second) {
                    l++;
                }
                while (a[r] == ans.second) {
                    r--;
                }
                if (a[l] != a[r]) {
                    prack = false;
                    break;
                }
                l++;
                r--;
            }
            if (track||prack) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
