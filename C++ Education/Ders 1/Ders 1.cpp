#include <iostream>

using namespace std;  //Ýki fonksiyonun adý ayný ama farklý kütüphanelerde ve iþlevlerde olabilir. Bunun için namespace kullanýyoruz 
/*
int main(int argc, char** argv) {
	
	
	cout<<"hello world";
	//ya da þeklinde olabilir
	std::cout<<"hello world";	// bunu kullanýrsak namespace yazmamýza gerek yok
	
	return 0;
}

/*int main(int argc, char** argv) {
	
	int a;
	string b;
	
	cin>>a>>b;	//birlikte yazdýrma gibi bi avantajý var %s ye filan gerek yok
	
//	cout<<"a = "<<a<<"  "<<"\n"<<"b = "<<b;
	cout<<"a = "<<a<<"  "<<endl<<"b = "<<b;
	//artýk %d %F %s kullanmamýza gerekyok kendisi algýlýyor veri tipini
	// \n e devam edebilir ya da yerine endl (endline) yazabilirsin
	
	return 0;
}*/



/*int main(int argc, char** argv) {	//Normal bir adresin deðeri deðiþtirilemez. Bu yüzden pointerlarý kullanýyoruz pointerlarýn yeri deðiþtirilebilir sonradan.
	
	int a=5;
	int b;
	int *p = new int; //BU ADRESÝ OLAN BÝR POÝNTER - int *p; ve sonra p = new int; da yapabilirdik
	
	*p = 8; //pointerýn gösterdiði adrese 8 i atadýk.
	b=a;
	
	cout<<&a; //baþýna & koyarsak adresini gösterir ve ikisinin de adresi farklý
	cout<<endl<<&b;
	cout<<endl<<p; //yaparsak bellekteki konumunu gösterir
	cout<<endl<<*p; //þimdi deðerini gösterir
	
	// p = &a; yapýlabilir. ancak &a = p yapýlamaz. (normal adreslerin yeri deðiþtirilemez.)
	//hatta bi pointer daha tanýmlayýp q = p yaparak ayný yeri göstertebilirsiniz 

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
