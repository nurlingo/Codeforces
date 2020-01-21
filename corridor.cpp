#include <bits/stdc++.h>
using namespace std;
 
int n, a, b;
 
int fact(int n) { 
   if ((n==0)||(n==1))
      return 1;
   else
      return n*fact(n-1);
}
 
int main(void) {
 
    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);
    
    pair<int, int> arr[(a+1)*(b+1)];
 
    int z = 0;
    
    for (int i=0;i<=a;i++) {
    	for (int j=0;j<=b;j++) {
    		if ((i+3*j)==n) {
    			arr[z] = make_pair(i,j);
    			z++;
    		}
    	}
    }
    
    int ways = 0;
    
    for (int i=0;i<z;i++) {
    	ways += fact(arr[i].first+arr[i].second) / fact(arr[i].first) / fact(arr[i].second);
    }
    
    printf("%d\n", ways);
    
   
    
    return 0;
}