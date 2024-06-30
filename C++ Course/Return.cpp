#include <iostream>

using namespace std;

int topla(int a, int b, int c);

int main(int argc, char** argv) {
	
	int a,b,c,f;
	
	cout<<"Sayi giriniz: ";
	cin>>a;
	cout<<"Sayi giriniz: ";
	cin>>b; 
	cout<<"Sayi giriniz: ";
	cin>>c;
	
	f = topla(a,b,c);
	
	cout<<"Toplam: "<<f;
	
	return 0;
}

int topla(int a, int b, int c)
{
	int toplam = a + b + c;
	
	return toplam;
}
