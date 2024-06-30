#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int faktoriyel=1,sayi;
	
	cout<<"Sayi giriniz: ";
	cin>>sayi;
	
	for(int i=sayi;i>=1;i--)
	{
		faktoriyel = faktoriyel*i;
	}
	cout<<faktoriyel;
	
	return 0;
}
