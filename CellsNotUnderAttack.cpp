#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
 
    int n, m;
    long long cCount, rCount;
    cin >> n >> m;

    cCount = n;
    rCount = n;

    int rows[n];
    int cols[n];

    for (int i = 0; i<n; i++) {
        rows[i] = 1;
        cols[i] = 1;
    }
 
    for (int i = 0; i < m; i++) {

        int r, c;
        cin >> r >> c;
            
        if (rows[r]) {
            rCount--;
            rows[r] = 0;
        }

        if (cols[c]) {
            cCount--;
            cols[c] = 0;
        }

        long long cells = cCount * rCount;

        cout << cells << " ";
        
    }
 
    return 0;
}