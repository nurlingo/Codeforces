#include <iostream>
#include <algorithm>
using namespace std;

int n;

int binarySearch(int arr[], int x) {

    int l,r,ans;
    l = 0;
    r = n-1;
    ans = 0;

    while (l<=r) {
        int m = (l + r) / 2;

        if (arr[m] <= x) {
            l = m+1;
            ans = m+1;
        } else {
            r = m-1;
        }
    }

    return ans;

}

void sort(int &arr[]) {


}

int main() {
    cin >> n;

    int sortedPricesArr[n];

    for (int i = 0;i<n;i++) {
        cin >> sortedPricesArr[i];
    }

    sort(sortedPricesArr, sortedPricesArr+n);

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        cout << binarySearch(sortedPricesArr, x) << endl;
    }

    return 0;
}