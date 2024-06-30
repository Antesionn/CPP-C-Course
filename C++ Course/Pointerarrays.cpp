#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	string array[] = {"Fatih","Kerim","Ozkurt"};
	
	cout<<"Arrayin adresi: "<<array<<endl;
	cout<<"Arrayin adresi +1: "<<array + 1<<endl<<endl;
	string *p = array;		//arrayin baslangic degerini aliyor.
	cout<<"Pointerarrayin ilk adresi: "<<p<<endl;
	cout<<"Pointerarrayin adresi + 1: "<<p + 1<<endl<<endl;
	
	cout<<"Pointerin degeri: "<<*p<<endl;				//bu yuzden baslangic degerini yazdiriyor.
	cout<<"Pointer degeri +1: "<<*(p+1)<<endl;
	cout<<"Pointer degerini Array gibi almak: "<<p[2];
	
	return 0;
}
