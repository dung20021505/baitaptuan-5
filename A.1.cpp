#include <iostream>
using namespace std;
int main()
{
    int a[3];
    char b[3];
    for (int i = 0; i < 3; i++) {
	    cout << &a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
	    cout << (void*)&b[i] << " ";
    }
    cout << endl;
    a[0] = 13;
    b[0] = 12;
    for (int i = 0; i < 3; i++) {
	    cout << &a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
	    cout << (void*)&b[i] << " ";
    }

    return 0; 
    
}
  //  khai b�o int , dia chi c�c phan tu trong mang cach nhau 4 �
  //  khai b�o char , dia chi c�c phan tu trong mang cach nhau 1 �
