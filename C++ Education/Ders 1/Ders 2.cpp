#include <iostream>

using namespace std;

/*int main(int argc, char** argv) {
	
	int *p = new int(8); //direkt de�eri atar.
	
	cout<<*p;
	
	delete *p; //i�imiz bittikten sonra bellekten  pointer� siliyoruz
	p = NULL;
	
	//Bir fonksiyonun i�inde pointer kullan�rsan o fonksiyonda pointer� silmelisin de yoksa 1000 kere �a��rsan 1000 kere bellek yeri tutar.
	//Normal de�i�kende silmeye gerek yoktur ba��na static yazmad���n s�rece silinir.
	
	return 0;
}*/


/*void V(int a){
	
	cout<<"Call by Value: "<<a;
		
}

void R(int &a){
	
	cout<<"Call by Refference: "<<a;
	
}

void P(int *a){
	
	cout<<"Call by Pointer: "<<*a;
	
}


int main(){

	int k = 5;
	V(k); 		//Bu durum "Call by Value" dur. De�eri �a��r�r�z. 5 sonucunu verir. A da yap�lan de�i�iklik k y� etkilemez.
	cout<<endl;
	R(k);		//Bu durum "Call by Refference" d�r. Adresi �a��r�r�z. 5 sonucunu verir. A da yap�lan de�i�iklik k y� etkiler.
	cout<<endl;
	P(&k);		//Bu durum "Call by Pointer" d�r. Adresi �a��r�r�z. 5 sonucunu verir. Fonksiyonu �a��r�rken operat�r�n� �a��rmal�y�z. Sonu� 5
	
	return 0;
}*/

template <typename F , typename O , typename P>

void yazdir( F b , O c , P d)
{
	
	cout<<b<<"   "<<c<<"  "<<d;			//template <typename X> veri tipini analiz edip otomatik kullanmana izin veriyor.
	
}

int main(){
		
			
	yazdir(21.58,"yirmi bir",6);
	
	}
 

