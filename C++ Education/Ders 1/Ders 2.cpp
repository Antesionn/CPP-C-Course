#include <iostream>

using namespace std;

/*int main(int argc, char** argv) {
	
	int *p = new int(8); //direkt deðeri atar.
	
	cout<<*p;
	
	delete *p; //iþimiz bittikten sonra bellekten  pointerý siliyoruz
	p = NULL;
	
	//Bir fonksiyonun içinde pointer kullanýrsan o fonksiyonda pointerý silmelisin de yoksa 1000 kere çaðýrsan 1000 kere bellek yeri tutar.
	//Normal deðiþkende silmeye gerek yoktur baþýna static yazmadýðýn sürece silinir.
	
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
	V(k); 		//Bu durum "Call by Value" dur. Deðeri çaðýrýrýz. 5 sonucunu verir. A da yapýlan deðiþiklik k yý etkilemez.
	cout<<endl;
	R(k);		//Bu durum "Call by Refference" dýr. Adresi çaðýrýrýz. 5 sonucunu verir. A da yapýlan deðiþiklik k yý etkiler.
	cout<<endl;
	P(&k);		//Bu durum "Call by Pointer" dýr. Adresi çaðýrýrýz. 5 sonucunu verir. Fonksiyonu çaðýrýrken operatörünü çaðýrmalýyýz. Sonuç 5
	
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
 

