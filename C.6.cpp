#include<iostream>
using namespace std;
int ucl(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; 
        }else{
            b -= a;
        }
    }
    return a;
}
int main (){
	int a,b;
	cin >> a >> b;
	if(ucl(a,b)==1) {
		cout << "2 so nguyen to cung nhau" ;
	}
	else {
		cout << "ko phai 2 so nguyen to cung nhau " ;
	} 
	return 0; 
} 
