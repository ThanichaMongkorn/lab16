#include <iostream>
using namespace std;

int main(){
    int a =5;
    char b = 'A';
    char &c = b;
    int *x = &a;
    char *y =&b;
	int *z = x;
	
	
	cout <<a<<" "<<b<<" "<<c<<" "<<x<<" "<<(int *)y<<" "<<z<<endl;
	cout <<&a<<" "<<(int *)&b<<" "<<(int *)&c<<" "<<&x<<" "<<&y<<" "<<&z<<endl;
	
	*&c='F';
	cout <<a<<" "<<b<<" "<<c<<" "<<x<<" "<<(int *)y<<" "<<z<<endl;

	
	*&c='W';
	cout <<a<<" "<<b<<" "<<c<<" "<<x<<" "<<(int *)y<<" "<<z<<endl;

	
    *x=6;
	cout <<a<<" "<<b<<" "<<c<<" "<<x<<" "<<(int *)y<<" "<<z<<endl;

	
	*x=7;
	cout <<a<<" "<<b<<" "<<c<<" "<<x<<" "<<(int *)y<<" "<<z<<endl;


	return 0;
}