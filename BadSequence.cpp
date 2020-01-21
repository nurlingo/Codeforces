#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
 
    int n, openCount, closedCount, outOfOrderCount;
    cin >> n;
    openCount = 0;
    closedCount = 0;
    outOfOrderCount = 0;

    string answer = "Yes";
 
    for (int i = 0; i < n; i++) {

        char bracket;
        cin >> bracket;

        // read input and build squares' size matrix
        if (bracket == '(') {
            openCount++;
        } else {
            closedCount++
        } 
        
        if (closedCount - openCount > outOfOrderCount {
            outOfOrderCount++;
        }

    }

    if (outOfOrderCount > 1
        || openCount - closedCount != 0
    ) answer = "No"

    cout << answer;
 
    return 0;
}