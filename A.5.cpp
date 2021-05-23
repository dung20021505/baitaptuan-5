  
#include <iostream>
using namespace std;
int main()
{
    //a
	int a;
    int* b = &a;
    cout << &a << " " << &b << endl;
    // Bien tham chieu va bien no chieu toi la hai bien 
    //b
	int *c;
	cout << c << endl; 

    // co the khai bao 
	//c
	int d;
	 b = &d;
	cout << &d << " " << b << endl;
	return 0; 
	// Có the chieu tham chieu toi 1 bien khac 
}
