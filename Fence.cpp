#include <bits/stdc++.h>
using namespace std;
 
int n, k;

int findMin(int a[]) {
    
    int min = a[0];
    int minIndex = 0;

    for (int i = 0; i<n; i++) {
        if (a[i]<min) {
            minIndex = i;
        }
    }

    return minIndex+1;

}
 
int main() {
 
    scanf("%d", &n);
    scanf("%d", &k);
    
    int a[n];
    
  //  for(int i = 0; i<n; i++){
		// scanf("%d",&a[i]);
  //      printf("%d ", a[i]);
  //  }
  //  printf("\n");

	if (k==1) {
		return findMin(a);
	}

    int minJ = 0;
    int minSum = 0;
    int prevSum = 0;


	for (int i=0; i<k; i++) {
			printf("run");
        	minSum += a[i];
	}
    
    prevSum = minSum;
    // printf("%d ", minSum);

    for (int i=1; i<n-k; i++) {
        int sum = prevSum - a[i-1] + a[i+k-1];
        prevSum = sum;
        if (sum<minSum) {
            minSum = sum;
            minJ = i;
        }
            
        // printf("aik: %d i: %d: s: %d", a[i+k-1], i, sum);
    }

    printf("%d",minJ+1);
 
}