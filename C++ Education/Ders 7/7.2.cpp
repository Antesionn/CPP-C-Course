#include <iostream>

using namespace std;

class Memur
{
	protected:
		string name;
		string surname;
		int id;		
};

class Doktor: public Memur
{
	private:
		string uzmanlik;
		int hafameliyat;
	public:
		void setdr(string,string,int,string,int);
		void print();
	
};

class Hemsire: public Memur
{
	private:
		string unit;
		int vardiye;
	public:
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
	cout<<"Ad: "<<name<<endl<<"Soyad:"<<surname<<endl<<"ID: "<<id<<endl<<"Birim: "<<unit<<endl<<"Vardiye: "<<vardiye<<endl<<endl;
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
