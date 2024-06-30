#include <iostream>

using namespace std;


void factorial(int);

int main(int argc, char** argv) {
	
	int input;
	
	cout<<"Sayi giriniz: ";
	cin>>input;
	
	factorial(input);
	
	return 0;
}


void factorial(int sayi)
{
	int faktoriyel = 1;
	
	for(int i=2;i<=sayi;i++)
	{
		faktoriyel = faktoriyel * i;
	}
	cout<<faktoriyel;
}
