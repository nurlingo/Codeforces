#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    unsigned long long n,k;
    cin >> n >> k;

    if (k>=43) {
        cout << "No";
        return 0;
    } 
 
    for (unsigned long long i = 1; i <= k; i++) {
        
        if ((n+1)%i != 0) {
            cout << "No";
            return 0;
        }

    }
    
    cout << "Yes";
    return 0;
}