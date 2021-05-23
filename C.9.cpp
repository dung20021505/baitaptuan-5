#include<iostream>
#include<stdlib.h> 
#include<ctime> 
using namespace std;
int main (){
	int n;
	cin >> n;
	srand(time(NULL));
	int a = rand()%n;
	cout << a; 
	return 0;
}
