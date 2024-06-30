#include <iostream>
using namespace std;

struct student{
	
	string name;
	string surname;
	int age;
	
};

void yazdir(student* stuf);

int main(int argc, char** argv) {
	
	struct student stu1;
	
	stu1.name = "Fatih";
	stu1.surname = "Ozkurt";
	stu1.age = 18;
	
	yazdir(&stu1);
	
	return 0;
}

void yazdir(student* stuf)
{
	cout<<stuf->name<<endl;
	cout<<stuf->surname<<endl;
	cout<<stuf->age<<endl;
}
