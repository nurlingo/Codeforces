#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
 
    int n, m, s;
    cin >> n >> m;
    s = 1;
 
    int arr[n][m];
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char temp;
            cin >> temp;
            
            // read input and build squares' size matrix
            if (temp == '#') {
                if (i == 0 || j == 0) arr[i][j] = 1;
                else arr[i][j] = min(min(arr[i-1][j], arr[i][j-1]), arr[i-1][j-1]) + 1;
            } else {
                arr[i][j] = 0;
            }
            
            int incrS = s+1;
            
            while (incrS*3 <= i+1 && incrS*3 <= j+1) {
                
                int localS = min(  
                                min ( 
                                    min(arr[i-incrS][j], arr[i][j-incrS]),
                                    min(arr[i-(2*incrS)][j-incrS], arr[i-incrS][j-(2*incrS)])
                                ), 
                                arr[i-incrS][j-incrS]
                            );
                                
                if (localS >= incrS) {
                  s = incrS;
                  incrS++;
                } else break;
            }
        }
    }
 
    cout << s;
 
    return 0;
}