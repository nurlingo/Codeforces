#include <iostream>
using namespace std;


// equation x·a + y·b = n
// a,b,n are positive integers. find nonnegative integers x,y if they exist.


int main() {

    int n,a,b;

    cin >> n;
    cin >> a;
    cin >> b;

    for (int i = 0; i * b <= n; i++) {
        
        if ((n-i*b)%a == 0) {
            cout << "YES" << "\n" << (n-i*b)/a << " " << i << "\n";
            return 0;
        }

    }

    cout << "NO\n";

    return 0;
}