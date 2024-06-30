#include <iostream>
using namespace std; 

struct student
{
	string name;
	string surname;
	int age;
};

int main(int argc, char** argv) {
	
	student stu1;
	student *p = &stu1;
	p->name = "Fatih";
	p->surname = "Ozkurt";
	p->age = 19;	

	cout<<stu1.name<<endl<<stu1.surname<<endl<<stu1.age;	
	
	
	
	
	return 0;
}
