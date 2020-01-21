#include <iostream>
using namespace std;
 
int main() {
    int n, x;
    
    cin >> n;
    cin >> x;

    // [ i | i.isFactorOf(x) && x/i =< n]
 
    int upperBound, factorsCount;
    
    factorsCount = 0;
    if (x>n) upperBound = n;
    else upperBound = x;

    for (int i = 1; i<=upperBound; i++) {
        if (x%i == 0 && x/i <= n) {
            factorsCount++;
        }
    }
    
    cout << factorsCount;
    cout << "\n";
    
    return 0;
    
    
}