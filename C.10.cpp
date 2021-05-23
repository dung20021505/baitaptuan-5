#include<iostream>
#include <math.h>
#include<stdlib.h> 
#include<ctime> 
using namespace std; 
void  chiahet(int a[],int n) {
	for (int i=0;i<n;i++){
		for (int j=i;j<n;j++){
			for (int k=j;k<n;k++){
				if ((a[i]+a[j]+a[k])%25==0){
					cout << a[i] <<" " << a[j] << " " << a[k] << endl; 
				} 
			} 
		} 
	} 
}
int main() {
	srand(time(NULL));
	int a[50],i; 
	int n = rand()%50;
	for (i=0;i<n;i++){
		a[i] = rand() %50; 
	} 
	chiahet(a,n) ;
	return 0; 
	
}
