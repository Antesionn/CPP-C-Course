#include <iostream>

using namespace std;

class Person{
	
	protected:
		string name;
		string surname;
		int  katsayisizsaatbasiucret = 9;
		
	public:
		virtual int totalmaas() = 0;
		void setinfo(string,string);
		string getname();
		string getsurname();
		int getkatsayisizsaatbasiucret();
};

void Person::setinfo(string _name, string _surname)
{
	name = _name;
	surname = _surname;
}

string Person::getname()
{
	return name;
}

string Person::getsurname()
{
	return surname;
}

class Engineer: public Person
{
	public:
		int totalmaas()
		{
			return (katsayisizsaatbasiucret * 16);
		}
};

class Doctor:public Person
{
	private:
		int *pointer;
	public:
		int totalmaas()
		{
			return (katsayisizsaatbasiucret * 36);
		}	
		Doctor();
		Doctor(const Doctor &obj);
		void setpointer(int);
		int  getpointer();
};

Doctor::Doctor()
{
	pointer = new int;
	*pointer = 23;
}

void Doctor::setpointer(int _pointer)
{
	*pointer = _pointer;
}

int Doctor::getpointer()
{
	return *pointer;
}
Doctor::Doctor(const Doctor &obj)
{
	cout<<"Constructor in progress"<<endl<<endl;
	pointer = new int;
	*pointer = *obj.pointer;
}

int main(int argc, char** argv) {
	
	Person *myArray[2];
	
	Doctor *a = new int;
	Doctor *b = new int(*a);
	
	a->setpointer(45);
	cout<<a->getpointer()<<endl<<b->getpointer()<<endl;

	
	myArray[0] = new Engineer();
	myArray[0]->setinfo("Yusuf","Engin");
	
	cout<<endl<<"Ad: "<<myArray[0]->getname()<<endl<<"Soyad: "<<myArray[0]->getsurname()<<endl<<"Toplam Maas = "<<myArray[0]->totalmaas()<<endl<<endl<<endl;
	
	myArray[1] = new Doctor();
	myArray[1]->setinfo("Huseyin","Demirci");
	
	cout<<"Ad: "<<myArray[1]->getname()<<endl<<"Soyad: "<<myArray[1]->getsurname()<<endl<<"Toplam Maas = "<<myArray[1]->totalmaas();
	
	return 0;
}
