#include <iostream>

using namespace std;  //�ki fonksiyonun ad� ayn� ama farkl� k�t�phanelerde ve i�levlerde olabilir. Bunun i�in namespace kullan�yoruz 
/*
int main(int argc, char** argv) {
	
	
	cout<<"hello world";
	//ya da �eklinde olabilir
	std::cout<<"hello world";	// bunu kullan�rsak namespace yazmam�za gerek yok
	
	return 0;
}

/*int main(int argc, char** argv) {
	
	int a;
	string b;
	
	cin>>a>>b;	//birlikte yazd�rma gibi bi avantaj� var %s ye filan gerek yok
	
//	cout<<"a = "<<a<<"  "<<"\n"<<"b = "<<b;
	cout<<"a = "<<a<<"  "<<endl<<"b = "<<b;
	//art�k %d %F %s kullanmam�za gerekyok kendisi alg�l�yor veri tipini
	// \n e devam edebilir ya da yerine endl (endline) yazabilirsin
	
	return 0;
}*/



/*int main(int argc, char** argv) {	//Normal bir adresin de�eri de�i�tirilemez. Bu y�zden pointerlar� kullan�yoruz pointerlar�n yeri de�i�tirilebilir sonradan.
	
	int a=5;
	int b;
	int *p = new int; //BU ADRES� OLAN B�R PO�NTER - int *p; ve sonra p = new int; da yapabilirdik
	
	*p = 8; //pointer�n g�sterdi�i adrese 8 i atad�k.
	b=a;
	
	cout<<&a; //ba��na & koyarsak adresini g�sterir ve ikisinin de adresi farkl�
	cout<<endl<<&b;
	cout<<endl<<p; //yaparsak bellekteki konumunu g�sterir
	cout<<endl<<*p; //�imdi de�erini g�sterir
	
	// p = &a; yap�labilir. ancak &a = p yap�lamaz. (normal adreslerin yeri de�i�tirilemez.)
	//hatta bi pointer daha tan�mlay�p q = p yaparak ayn� yeri g�stertebilirsiniz 

	return 0;
}*/

int main(int argc, char** argv) //ODEV
{
	
	int a = 6;
	int *p = new int;
	int *q;
	int *t;
	
	*p = 7;
	q = &a;
	t = p;
	
	cout<<a<<"  "<<&a;
	cout<<endl<<*p<<"  "<<p;
	cout<<endl<<*q<<" "<<q;
	cout<<endl<<*t<<"  "<<t;

	return 0;
}
