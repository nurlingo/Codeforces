#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
 
long long n, m, d;
 
int main() {

    unordered_map<10, int> dict;
    
    int ns[n], c, didStore;
    c = 1;
    didStore = 0;

    cin >> n >> m >> d;

    for(int i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            ns[i] = temp;
    }

    while(didStore) do {
        for(int i = 0; i < n; i++) {

            long long temp = ns[i];

            if (dict[temp] > 0) {
                continue;
            } else {
                dict[temp] = c;
                i += d-1;
                didStore = 1;
            }
        }
        c++;
    }

    for(int i = 0; i < n; i++) {
        long long temp = ns[i];
        cout << dict[temp] << " ";
    }
 
    
    return 0;
}