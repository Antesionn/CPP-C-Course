#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	string islem;
	int a,b;
	
	cout<<"Islemi giriniz (+,-,*,/): ";
	cin>>islem;
	
	if(islem == "+")
	{
		cout<<"Birinci sayi: ";
		cin>>a;
		cout<<"Ikinci sayi: ";
		cin>>b;
		cout<<"Toplam = "<<a+b;
	}
	else if(islem == "-")
	{
		cout<<"Birinci sayi: ";
		cin>>a;
		cout<<"Ikinci sayi: ";
		cin>>b;
		cout<<"Fark = "<<a-b;
		
	}
	else if(islem == "*")
	{
		cout<<"Birinci sayi: ";
		cin>>a;
		cout<<"Ikinci sayi: ";
		cin>>b;
		cout<<"Carpim = "<<a*b;
	}
	else if(islem == "/")
	{
		cout<<"Birinci sayi: ";
		cin>>a;
		cout<<"Ikinci sayi: ";
		cin>>b;
		cout<<"Bolum = "<<float(a)/float(b);
	}
	else
	{
		cout<<"Gecersiz islem!";
	}
	
	
	return 0;
}
