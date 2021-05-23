#include<iostream>
#include<math.h>
using namespace std;
int chuyendoi(int n) {
    int a[1000] ,t=0,i  ; 
    while (n!=0) {
    	a[t] =n%2 ;
    	n = n/2; 
        t=t+1 ;
	}
	for (i=t-1;i>=0;i--) {
		cout << a[i] ;
	}
}
int  main () {
	int n;
	cin >> n;
	chuyendoi (n); 
	return 0; 
}
