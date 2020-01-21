#include <iostream>
#include <math.h>
using namespace std;

int main() {

    // count factors of b

    unsigned long long b, factorsCount = 0;
    cin >> b;

    for (int i = 1; i <= sqrt(b); i++) {
        if (b%i == 0) {
            if (b / i == i)
                factorsCount++;
            else
                factorsCount += 2;
        }
    }

    cout << factorsCount << "\n";

    return 0;
}