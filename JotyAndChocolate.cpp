#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;


ull gcd(ull a, ull b) {

    while (b!=0) {
        ull x = a%b;
        a = b;
        b = x;
    }

    return a;

}
 
int main() {
 
    ull n,a,b,p,q;

    cin >> n >> a >> b >> p >> q;

    ull lcm = (a*b)/gcd(a,b);
    ull common = n/lcm;

    ull ans = ((n / a) - common) * p;
    ans += ((n/b) - common) * q;
    ans += common * max(p,q);
    
    cout << ans << endl;
 
    return 0;
}