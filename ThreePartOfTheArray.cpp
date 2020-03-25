#include <iostream>
#include <math.h>
using namespace std;
 
int n;
 
int binarySearch(unsigned long long s[], int l, unsigned long long x) {
 
    int r,ans;
    r = n-1;
    ans = -1;
 
    while (l<=r) {
        int m = (l + r) / 2;
 
        if (s[m] == x) {
            return m;
        } else if (s[m] > x) {
            l = m+1;
        } else {
            r = m-1;
        }
    }
 
    return ans;
}
 
int main() {
 
    cin >> n;
 
    unsigned long long a[n], p[n], s[n], sum, max;
 
    sum = 0;
 
    for (int i = 0; i < n; i++) {
        unsigned long long temp;
        cin >> temp;
 
        a[i] = temp;
        sum += temp;
        p[i] = sum;
    }
 
    sum = 0;
 
    for (int i = n-1; i >= 0; i--) {
        sum += a[i];
        s[i] = sum;
    }
 
    max = 0;
    for (int i = 0; i < n-1; i++) {
        int index = binarySearch(s, i+1, p[i]);
        if (index > 0 && p[i] > max) {
            max = p[i];
        }
    }
    
    cout << max;
    return 0;
}