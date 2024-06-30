#include <iostream>
using namespace std;

struct student{
	
	string name;
	string surname;
	int id;
	
};

void insert(student *stu[],int sira,int stusayi);
void update(student *stu[],int updateid,int stusayi);
bool remove(student *stu[],int removeid,int stusayi);
void search(student *stu[],char searchislem,int stusayi);
void print(student *stu[],int stusayi);

int main(int argc, char** argv) {
	
	int stusayi = 10;
	struct student *stu[stusayi] = {};	//10 elemanın da içeriğini null yapar parantez.
	
	char islem;
	int i = 0;
	int ii=1;
	
	while(ii){		//surekli islem isteyecek. En son ii yi 0 yapmak icin exit tanımlayacağız.
		
		cout<<endl<<"*****************************"<<endl<<"Yapacaginiz islemi giriniz: "<<endl<<endl;
		cout<<"1.Insert: E/e"<<endl<<"2.Update: U/u"<<endl<<"3.Remove: R/r"<<endl<<"4.Search: S/s"<<endl<<"5.Print: P/p"<<endl<<"6.Exit: E/e"<<endl<<endl<<"Islem: ";
		cin>>islem;
		cout<<endl;
		
		switch(islem)
		{
			case 'I':
			case 'i':
				insert(stu,i++,stusayi);	//i nin sayisini döngüye sokuyoruz.
				break;
			case 'U':
			case 'u':
				int updateid;
				cout<<"Ogrencinin ID si: ";
				cin>>updateid;
				update(stu,updateid,stusayi);
				break;
			case 'R':
			case 'r':
				bool silindimi;
				int removeid;
				cout<<"Silmek istediginiz ogrencinin ID sini giriniz: ";
				cin>>removeid;
				silindimi = remove(stu,removeid,stusayi);
				if(silindimi == 1)
				{
					i--;	
				}
				break;
			case 'S':
			case 's':
				char searchislem;
				cout<<"Arama parametresini giriniz "<<"Name (N/n)  Surname (S/s)  ID (I/i)"<<endl<<endl<<"Islem: ";
				cin>>searchislem;
				cout<<endl;
				search(stu,searchislem,stusayi);
				break;
			case 'P':
			case 'p':
				print(stu,stusayi);
				break;
			case 'E':
			case 'e':
				ii = 0;
				break;
		}
	}
		
	return 0;
}

void insert(student *stu[],int sira,int stusayi){
	
	int insertid;
	cout<<sira+1<<".ogrenci: "<<endl;
	while(1){
		
		bool varmi = false;
		cout<<"ID: ";
		cin>>insertid;
	
		int i = 0;
	
		while(stu[i] != NULL)
		{
			if(stu[i]->id == insertid)
			{
				varmi = true;
				break;
			}
			i++;
		}
		if(varmi == false)
		{
			stu[sira] = new student;
			stu[sira]->id = insertid;
			cout<<"Name: ";
			cin>>stu[sira]->name;
			cout<<"Surname: ";
			cin>>stu[sira]->surname;
			break;
		}
		else
		{
			cout<<"Girdiginiz id kullanimda."<<endl;	
		}
	}
}

void update(student *stu[],int updateid,int stusayi)
{

	int index = -1;
	int i = 0;
	
	while(stu[i] != NULL)
	{
		
		if(i>=stusayi)
		{
			break;
		}
		if(stu[i]->id == updateid)
		{
			index = i;
			break;
		}
		i++;	
	}
	if(index == -1)
	{
		cout<<endl<<"Kayit bulunamadi"<<endl;
	}
	else
	{
		cout<<"Name: "<<stu[index]->name<<endl;
		cout<<"Surname: "<<stu[index]->surname<<endl;
		cout<<"ID: "<<stu[index]->id<<endl<<endl;
		cout<<"Duzeltmek istediginiz bilgiyi secin:"<<endl;
		cout<<"Name: N/n  Surname: S/S"<<endl<<endl;
		cout<<"Islem: ";
		char updateislem;
		cin>>updateislem;
		cout<<endl;
		
		switch(updateislem){
			
			case 'N':
			case 'n':
				cout<<"Name: ";
				cin>>stu[index]->name;
				break;
				
			case 'S':
			case 's':
				cout<<"Surname: ";
				cin>>stu[index]->surname;
				break;
			default: 
				break;
		}
	}
}

bool remove(student *stu[],int removeid,int stusayi)
{
	
	int i = 0;
	bool varmi = 0;
	
	while(stu[i] != NULL)
	{
		if(stu[i]->id == removeid)
		{
			varmi = 1;
			break;
		}
		i++;
	}
	if(varmi == 0)
	{
		cout<<"Girmis oldgunuz ID kayitli degil.";
	}
	else
	{
		while(stu[i] != NULL)
		{
			if(i>=stusayi)
			{
				break;
			}
			stu[i] = stu[i+1];
			i++;
			
		}
		stu[i] = NULL;
	}
	return varmi;
}

void search(student *stu[],char searchislem,int stusayi)
{
	int i=0;

	switch(searchislem)
	{
		case 'N':
		case 'n':
		{	
			int i = 0;
			string searchname;
			cout<<"Name: ";
			cin>>searchname;
			
			while(stu[i] != NULL)
			{
				if(i>=stusayi)
				{
					break;
				}
				
				if(stu[i]->name == searchname)
				{
					cout<<endl<<"Name: "<<stu[i]->name<<endl;
					cout<<"Surname: "<<stu[i]->surname<<endl;
					cout<<"ID: "<<stu[i]->id<<endl<<endl;
				}
				else
				{
					cout<<endl<<"Kayit bulunamadi."<<endl;
				}
				i++	;
			}
			break;
		}
		case 'S':
		case 's':
		{	
			int i = 0;
			string searchsurname;
			cout<<"Surame: ";
			cin>>searchsurname;
			
			while(stu[i] != NULL)
			{
				if(i>=stusayi)
				{
					break;
				}
				
				if(stu[i]->surname == searchsurname)
				{
					cout<<endl<<"Name: "<<stu[i]->name<<endl;
					cout<<"Surname: "<<stu[i]->surname<<endl;
					cout<<"ID: "<<stu[i]->id<<endl<<endl;
				}
				else
				{
					cout<<endl<<"Kayit bulunamadi."<<endl;
				}
				i++	;
			}
			break;
		}
		case 'I':
		case 'i':
		{	
			int i = 0;
			int searchid;
			cout<<"ID: ";
			cin>>searchid;
			
			while(stu[i] != NULL)
			{
				if(i>=stusayi)
				{
					break;
				}
				
				if(stu[i]->id == searchid)
				{
					cout<<endl<<"Name: "<<stu[i]->name<<endl;
					cout<<"Surname: "<<stu[i]->surname<<endl;
					cout<<"ID: "<<stu[i]->id<<endl<<endl;
				}
				else
				{
					cout<<endl<<"Kayit bulunamadi."<<endl;
				}
				i++	;
			}
			break;
		}
	}		
}

void print(student *stu[],int stusayi)
{
	
	int i = 0;
	
	while(stu[i] != NULL)
	{
		
		if(i>stusayi)
		{
			break;
		}
		
		cout<<"Name: "<<stu[i]->name<<endl;
		cout<<"Surname: "<<stu[i]->surname<<endl;
		cout<<"ID: "<<stu[i]->id<<endl<<endl;
		
		i++;
	}
}
