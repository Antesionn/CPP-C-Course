#include <iostream>
using namespace std;

struct student{
	
	string name;
	string surname;
	int id;
	
};

void fill(student &stufill);
void print(student &stuprint);

int main(int argc, char** argv) {
	
	struct student stu[5];
	
	for(int i=0;i<5;i++)
	{
		fill(stu[i]);
	}
	
	for(int j=0;j<5;j++)
	{
		print(stu[j]);
	}
	
	return 0;
}

void fill(student &stufill){
	
	cout<<"Ad: ";
	cin>>stufill.name;
	cout<<"Soyad: ";
	cin>>stufill.surname;
	cout<<"ID: ";
	cin>>stufill.id;
	cout<<endl;
	
}

void print(student &stuprint){
	
	cout<<"Adi: "<<stuprint.name<<endl;
	cout<<"Soyadi: "<<stuprint.surname<<endl;
	cout<<"ID si: "<<stuprint.id<<endl<<endl;
	
	
	
}
