#include <iostream>
using namespace std;

int main() {
    int n, maximum = 0, current = 0;
    cin >> n;

    for (int i = 0; i<n; i++) {
        int temp;
        cin >> temp;
        if (temp<0 && !(temp&1)) {
            current++;
            maximum = max(current,maximum);
        } else {
            current = 0;
        }
    }

    cout << maximum;

}