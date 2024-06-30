#include <iostream>

using namespace std;

void degerdegis(int &ref);

int main(int argc, char** argv) {
	
	int a;
	
	cout<<"Degeri giriniz: ";
	cin>>a;
	cout<<"Ilk deger: "<<a<<endl<<endl;			//referanslar degiskenlere bekcilik eder.
												//pointerlardan farkları vardır ama daha kolaydır.
	degerdegis(&a);
	
	cout<<endl<<endl<<"A nin son degeri: "<<a;
	
	
	
	return 0;
}

void degerdegis(int &ref)
{
	cout<<"Yeni degeri giriniz: ";
	cin>>ref;
	cout<<"Fonksiyon icindeki degeri: "<<ref;
}
