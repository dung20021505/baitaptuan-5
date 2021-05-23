#include<iostream>
#include<math.h> 
using namespace std;
void nhapKN(int k[], int n[], int *soPhanTu){
	int i=0; 
		cin >> k[i] ;
		cin >> n[i] ; 
	while (k[i]!=-1||n[i]!=-1){
		i++; 
		cin >> k[i] ;
		cin >> n[i] ;
        
	}
	*soPhanTu=i; 
}

int kiemTra(int k, int n){
	if(0 <= k && k <=n && 1<=n && n <=20) {
		return 1; 
	}
	return 0; 
}
int GT(int n) {
	int i,t=1; 
	for (i=1;i<=n;i++){
		t=t*i; 
	} 
	return t; 
}
int toHop(int k, int n){
    int t =GT(n) /(GT(k)*GT(n-k));
    return t; 
}

int main() {
	int k[20],n[20] ;
	int a; 
	nhapKN(k,n,&a);
	for (int i=0;i<a;i++) {
		if( kiemTra(k[i],n[i])==1) {
			cout << toHop(k[i],n[i])<< endl;;
		}
		cout << endl; 
	}
	
}
