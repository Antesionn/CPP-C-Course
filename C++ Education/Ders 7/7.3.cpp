#include <iostream>

using namespace std;

class Memur						//Inheritence Constructor Konusu
{
	protected:
		string name;
		string surname;
		int id;		
		string test;
		Memur(string);
};

Memur::Memur(string _test)														//Base den bir constructor actik. (Onceki ornegin aynisi.)
{
	test = _test;
	cout<<"Test Constructor in progress: "<<test;
}

class Doktor: public Memur
{
	private:
		string uzmanlik;
		int hafameliyat;
	public:
		Doktor():Memur("Doktor Inheritance Constructor")						//Doktor constructor i Memur Constructorini cagiriyor.
		{
			cout<<endl;
		}
		void setdr(string,string,int,string,int);
		void print();
	
};

class Hemsire:public Memur
{
	private:
		string unit;
		int vardiye;
	public:
		Hemsire():Memur("Hemsire Inheritance Constructor")						//Hemsire constructor i Memur Constructorini cagiriyor.
		{
			cout<<endl<<endl;
		}
		void sethem(string,string,int,string,int);
		void print();
	
};

void Doktor::setdr(string _name,string _surname,int _id,string _uzmanlik,int _hafameliyat)
{
	name = _name;
	surname = _surname;
	id = _id;
	uzmanlik = _uzmanlik;
	hafameliyat = _hafameliyat;
}

void Hemsire::sethem(string _name,string _surname,int _id,string _unit,int _vardiye)
{
	name = _name;
	surname = _surname;
	id = _id;
	unit = _unit;
	vardiye = _vardiye;
}

void Doktor::print()
{
	cout<<"Ad: "<<name<<endl<<"Soyad:"<<surname<<endl<<"ID: "<<id<<endl<<"Uzmanlik: "<<uzmanlik<<endl<<"Haftalik Ameliyat: "<<hafameliyat<<endl<<endl;
}

void Hemsire::print()
{
	cout<<"Ad: "<<name<<endl<<"Soyad:"<<surname<<endl<<"ID: "<<id<<endl<<"Birim: "<<unit<<endl<<"Vardiye: "<<vardiye<<endl<<endl<<endl;
}

int main(int argc, char** argv) {
	
	Doktor Dr1;
	Hemsire Hem1;
	Dr1.setdr("Zehra","Demirci",1,"Genel Cerrahi",7);
	Hem1.sethem("Huseyin","Demirci",2,"Acil",8);
	Dr1.print();
	Hem1.print();
	
	return 0;
}
