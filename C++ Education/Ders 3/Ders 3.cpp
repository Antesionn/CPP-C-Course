#include <iostream>
using namespace std;

struct student{
	
	string name;
	string surname;
	int id;
	
};

void fill(student &stufill);

int main(int argc, char** argv) {
	
	struct student stu;
	
	fill(stu);
	
	cout<<stu.name<<endl;
	cout<<stu.surname<<endl;
	cout<<stu.id<<endl;
	return 0;
}

void fill(student &stufill){
	
	cout<<"Ad: ";
	cin>>stufill.name;
	cout<<"Soyad: ";
	cin>>stufill.surname;
	cout<<"ID: ";
	cin>>stufill.id;
	
}

