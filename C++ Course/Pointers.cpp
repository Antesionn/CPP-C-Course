#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int a = 5;
	int *p = &a;
	cout<<"Degiskenin degeri: "<<a<<endl;
	cout<<"Degiskenin adresi: "<<&a<<endl<<endl;
	cout<<"Pointer degeri: "<<*p<<endl;
	cout<<"Pointer adresi: "<<p<<endl;
	
	
	return 0;
}
