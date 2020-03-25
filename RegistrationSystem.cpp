#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
 
int n;
 
int main() {
    
    unordered_map<string, int> d;

    cin >> n;
 
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
 
        if (d[temp] > 0) {
            cout << temp << d[temp] << "\n";
            d[temp]++;
        } else {
            d[temp] = 1;
            cout << "OK" << "\n";
        }
    }
    return 0;
}