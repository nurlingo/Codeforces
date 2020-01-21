#include <iostream>
#include <math.h>
using namespace std;

int arr[1000];

void swap(int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int l, int h) {
    int pivot = arr[h];
    int i = l;

    for (int j = l; j<=h; j++) {
        if (arr[j] < pivot) {
            swap(i, j);
            i++;
        }
    }

    swap(i, h);

    return i;
}

void quickSort(int l, int h) {
    if (l < h) {
        int p = partition(l, h);
        quickSort(l, p-1);
        quickSort(p+1, h);
    }
}

int main() {

    int n, l;
    cin >> n >> l;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(0, n-1);

    double maxGap = (double) max(arr[0],l-arr[n-1]);

    for (int i = 1; i < n; i++) {
        double gap = (double) arr[i] - arr[i-1];
        if (gap/2 > maxGap)
            maxGap = gap/2;
    }

    cout << maxGap << "\n";

    return 0;
}