#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,k,m;
    cin >> n >> k >> m;

    int arr[m];
    vector <int> remainders[m];

    for (int i = 0; i<n; i++) {
        int temp;
        cin >> temp;
        remainders[temp%m].push_back(temp);
    }

    for (int i = 0; i < m; i++) {
        if (remainders[i].size() >= k) {
            cout << "Yes" << "\n";

            for (int j = 0; j < k; j++)
                cout << remainders[i][j] << " ";

            cout << "\n";
            return 0;

        }
    }

    cout << "No" << "\n";

    return 0;
}
