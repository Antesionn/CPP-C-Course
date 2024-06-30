#include <iostream>
using namespace std;

void degerdegis(int *p);

int main(int argc, char** argv) {
	
	int a;
	
	cout<<"A degerini giriniz: ";
	cin>>a;
	cout<<"A nin ilk degeri: "<<a<<endl<<endl;
	
	degerdegis(&a);
	
	cout<<"A nin son degeri: "<<a<<endl<<endl;			//Bu yontem call by refferance dir ve degeri degistirmeye olanak saglar.
														//Call by value degeri degistirmeye olanak saglamaz.
	return 0;
}

void degerdegis(int *p)
{
	cout<<"Yeni degerini giriniz: ";
	cin>>*p;
	cout<<"A nin fonksiyondaki degeri: "<<*p<<endl<<endl;
}
