#include <iostream>
using namespace std;

struct Adress{
	
	string city;
	int doorno;
};


struct student{
	
	string name;
	string surname;
	int age;
	Adress stu1address;
};

void fill(student* stu1fill);
void print(student stu1print);

int main(int argc, char** argv) {
	
	struct student stu1;
	
	fill(&stu1);
	print(stu1);
	
	return 0;
}

void fill(student* stu1fill){
	
	cout<<"Adi: ";
	cin>>stu1fill->name;
	cout<<"Soyadi: ";
	cin>>stu1fill->surname;
	cout<<"Yas: ";
	cin>>stu1fill->age;
	cout<<"Sehir: ";
	cin>>stu1fill->stu1address.city;
	cout<<"Kapi no: ";
	cin>>stu1fill->stu1address.doorno;
}

void print(student stu1print)
{
	cout<<endl<<"OGRENCI 1"<<endl<<endl;
	cout<<"Ad: "<<stu1print.name<<endl;
	cout<<"Soyad: "<<stu1print.surname<<endl;
	cout<<"Yas: "<<stu1print.age<<endl;
	cout<<"Sehir: "<<stu1print.stu1address.city<<endl;
	cout<<"Kapi no: "<<stu1print.stu1address.doorno<<endl;
}
