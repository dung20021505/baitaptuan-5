#include<iostream>
#include<math.h> 
using namespace std;
int songuyento(int n) {
	int i,t=0; 
	for (i=2;i<= sqrt(n);i++){
		if(n%i==0){
			t++; 
		} 
		if (t>0) {
			return 0; 
		}
	}
	return 1; 
}
int main() {
	int n,i;
	cin >> n ;
	for (i=2;i<=n;i++){
		
		if (songuyento(i)==1){
			cout << i << " "; 
		} 
	} 
	return 0; 
}
