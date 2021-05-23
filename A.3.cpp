#include <iostream>
using namespace std;
void chuyenthamtri(int x, int y)
{
    int m = x;
    x = y;
    y = m;
    cout << &x << " " << &y << endl;
}
void chuyenthamchieu(int& x, int& y)
{
    int m = x;
    x = y;
    y = m;
    cout << &x << " " << &y << endl;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << &a << " " << &b << endl;
    chuyenthamtri(a, b);
    chuyenthamchieu(a, b);
    return 0;
    
}
// doi so va tham chieu co cung dia chi , com doi so va tham tri khac dia chi; 

