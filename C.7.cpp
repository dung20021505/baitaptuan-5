#include<iostream>
using namespace std;
void tamgiac(int n) {
	int i,j,k; 
	for (i=1;i<=n;i++){
		for (k=1;k<=n-i;k++) {
			cout << " " ;
		}
        for (j=1;j<=(2*i-1);j++){
			cout << "*" ;
		}
		for (k=1;k<=n-i;k++) {
			cout << " " ;
		}
		cout << endl << endl ; 
	} 
}
int main (){
	int n;
	cin >> n;
	tamgiac(n);
	return 0; 
} 

