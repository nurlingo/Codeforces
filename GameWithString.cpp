#include <iostream>
using namespace std;
 
 
int main() {
    
    string infix;
    cin >> infix;
 
    int eos = infix.length();
    int count = 0;
 
    int used[eos];
    
    for(int r = 0; r<eos; r++) {
        used[r] = 0;
    }
 
    for(int r = 1; r<eos; r++) {
        char c = infix[r];
        
        int l = r-1;
 
        while (l>=0 && r<eos && infix[r] == infix[l]) {
            count++;
            used[l] = 1;
            used[r] = 1;
 
            while (l>=0 && used[l]) {
                l--;
            }
            
            while (r<eos && used[r]) {
                r++;
            }
            
        }
    }
    
    // cout << count;
 
    if (count%2 == 0) {
        cout << "No";
    } else {
        cout << "Yes";
    }
 
    return 0;
}