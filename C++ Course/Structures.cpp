#include <iostream>
using namespace std;


struct student{
	
	string name;
	string surname;
	int age;
	string section;	
	string number;
	
};

int main(int argc, char** argv) {
	
	student student1;
	student1.name = "Fatih";
	student1.surname = "Ozkurt";
	student1.age = 19;
	student1.section = "Bilgisayar Muhendisligi";
	student1.number = "20040101022";
	
	cout<<student1.name<<endl<<student1.surname<<endl<<student1.age<<endl<<student1.section<<endl<<student1.number;
	
	return 0;
}
