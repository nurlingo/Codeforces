#include <iostream>
using namespace std;
 
unsigned long long n, k;
 
int main() {
    
    cin >> n >> k;
    
    unsigned long long w, c;
    cin >> c;
    w = 0;

 
    for (int i = 1; i < n; i++) {
        unsigned long long temp;
        cin >> temp;
 
        if (temp > c) {
            w = 1;
            c = temp;
        } else {
            w++;
        }
 
        if (w == k) {
            break;
        }
    }
 
    cout << c;
    return 0;
}