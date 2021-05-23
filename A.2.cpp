#include<iostream>
using namespace std;

long long  factorial(int x){
	if(x == 1){
		return 1;
	}
	else {
		cout << "x = " << x * factorial(x - 1) << " at " << &x << endl;
	return x* factorial(x - 1);	
    }
}
int main(){
	int n;
	cin >> n; 
	cout <<	factorial(n);	
	return 0;
}
