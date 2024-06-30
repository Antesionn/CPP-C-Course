#include<iostream>
using namespace std;

class Student
{
	public:	
		string ad;
		string soyad;
		int numara;
		
		int i=0;
		
	void student()
	{
		
		if(numara%2 == 0)
		{
		 i+=1;
		 
		cout<<i<<". Ogrencinin Ad = "<<ad<<endl<<i<<". Ogrencinin Soyad = "<<soyad<<endl<<i<<". Ogrencinin Numara = "<<numara<<endl;
		
		}
	}
};

int main()
{
	Student *stu1[3];

	for(int i=0;i<3;i++)
	{
	stu1[i] = new Student;
	
	cout<<i+1<<".Ogrencinin Ad = ";
	cin>>stu1[i]->ad;
	cout<<i+1<<".Ogrencinin Soyad = ";
	cin>>stu1[i]->soyad;
	cout<<i+1<<".Ogrencinin numarasini  giriniz = "<<endl;
	cin>>stu1[i]->numara;
	}
	
	for(int i=0;i<3;i++)
	{
	    stu1[i]->student();
	}
	return 0;
}
