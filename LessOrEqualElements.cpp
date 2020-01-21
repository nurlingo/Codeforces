#include <iostream>
#include <algorithm>
using namespace std;

int n, m;

int binarySearch(int a[n], int x) {

    int l,r,ans;
    l = 0;
    r = n-1;
    ans = 0;

    while (l<=r) {
        int m = (l + r) / 2;

        if (a[m] <= x) {
            l = m+1;
            ans = m+1;
        } else {
            r = m-1;
        }
    }

    return ans;
}

int main() {
    
    cin >> n >> m;
    
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a+n);

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        cout << binarySearch(a, x) << " "
    }
 
    return 0;
}