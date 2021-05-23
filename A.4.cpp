  
#include <iostream>
using namespace std;
void chuyenmang(int x[])
{
    for (int i = 0; i < 3; i++) {
        cout << &x[i] << " ";
    }
}
void chuyenchuoi (string s)
{
    cout << &s << endl;
}
int main()
{
    int x[3] = { 1,2,3 };
    for (int i = 0; i < 3; i++) {
        cout << &x[i] << " ";
    }
    cout << endl;
    string s ;
    chuyenmang(x);
    cout << endl;
    cout << &s << endl;
    chuyenchuoi(s);
    return 0;
    // chuyen mang la pass-by-reference vi co cung dia chi, chuyen chuoi la pass-by-value vi khac dia chi
}
