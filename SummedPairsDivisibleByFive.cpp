#include <iostream>
#include <unordered_map>
#include <cassert>
using namespace std;
 
int main() {

    unsigned long long n, m, pairsCount;

    // the number of pairs of integers (x, y) such that 1 ≤ x ≤ n, 1 ≤ y ≤ m and (x + y) is divisible by 5
    
    cin >> n;
    cin >> m;

    unordered_map<int, unsigned long long> dictN;
    unordered_map<int, unsigned long long> dictM;
	
 
    for (int i = 1; i<=n; i++) {
        dictN[i%5]++;
    }

    for (int i = 1; i<=m; i++) {
        dictM[i%5]++;
    }
 
    pairsCount = dictN[0]*dictM[0] + dictN[1]*dictM[4] + dictN[4]*dictM[1] + dictN[2]*dictM[3] + dictN[3]*dictM[2];
    
    cout << pairsCount;
    cout << "\n";

    return 0;
    
    
}