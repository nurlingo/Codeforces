#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n,k;
    cin >> n >> k;
 
    vector <int> ans;
 
    for (int i = 2; i<n; i++) {
        while (n%i==0 && ans.size()<k-1) {
            n = n/i;
            ans.push_back(i);
        }
    }
 
    if (ans.size() == k-1 && n > 1) {
        for (int i = 0; i < k-1; i++) {
            cout << ans[i] << " ";
        }

        cout << n << endl;
    } else {
        cout << -1;
    }
 
    return 0;
}