#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int islem;
	
	cout<<"Islemi giriniz: ";
	cin>>islem;
	
	switch(islem)
	{
		case 1:
			cout<<"Toplama islemi.";
			break;
		case 2:
			cout<<"Cikartma islemi.";
			break;
	}
	
	
	return 0;
}
