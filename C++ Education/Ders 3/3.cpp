#include <iostream>
using namespace std;

struct student{
	
	string name;
	string surname;
	int id;
	int note;
	
};

void fill(student *stufill);
void print(student *stuprint);
float ort(student *stuort[], int size);
									
int main(int argc, char** argv) {
	
	struct student *stu[5];
	float ortalama;
	
	for(int i=0;i<5;i++)
	{
		stu[i] = new student;
		fill(stu[i]);		
	}
	
	for(int j=0;j<5;j++)
	{
		print(stu[j]);
		cout<<endl;
	}
	
	ortalama = ort(stu,5);
	cout<<"Ortalama = "<<ortalama;
	return 0;
}

void fill(student *stufill)
{
	
	cout<<"Ad: ";
	cin>>stufill->name;
	cout<<"Soyad: ";
	cin>>stufill->surname;
	cout<<"ID: ";
	cin>>stufill->id;
	cout<<"Not: ";
	cin>>stufill->note;
	cout<<endl;
	
}

void print(student *stuprint)
{
	
	cout<<"Adi: "<<stuprint->name<<endl;
	cout<<"Soyadi: "<<stuprint->surname<<endl;
	cout<<"Id: "<<stuprint->id<<endl;
	cout<<"Notu: "<<stuprint->note<<endl;
	
}

float ort(student *stuort[], int size)
{
	
	float toplam;
	
	for(int p=0;p<size;p++)
	{
		toplam += stuort[p]->note;
	}
	
	return toplam / size;
	
}
