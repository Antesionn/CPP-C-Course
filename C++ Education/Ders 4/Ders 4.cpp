#include <iostream>

using namespace std;

struct student
{
	int id;
	string name;
	string surname;
};

void print(student *stu[],int stusayi)
{
	int i = 0;
	while(stu[i] != NULL)
	{		
		cout<<"Id --> "<<stu[i]->id<<endl;
		cout<<"Name -->"<<stu[i]->name<<endl;
		cout<<"Surname -->"<<stu[i]->surname<<endl;
		cout<<"----------------"<<endl;
		i++;
	}	
}

void insert(student *stu[],int sira,int stusayi)
{		
	int id;
	cout<<sira<<". ogrenci :"<<endl;
	while(1)
	{
		bool varMi = false;
		cout<<"Id : ";
		cin>>id; 
		int i = 0;
		while(stu[i] != NULL)
		{
			if(stu[i]->id == id)   //stu[i]->id = 10     id = 10
			{
				varMi = true;
				break;
			}
			i++;
		}
		if(varMi == false)
		{
			stu[sira] = new student;
			stu[sira]->id = id;
			cout<<"Name : ";
			cin>>stu[sira]->name;
			cout<<"Surname : ";
			cin>>stu[sira]->surname;
			break;
		}
		else
		{
			cout<<"Bu Id Zaten Kullanimda. Lutfen Baska Bir Id Deneyiniz";
		}
	}
}

void update(student *stu[],int uid,int stusayi)
{
	int index = -1;
	int i = 0;
	while((stu[i] != NULL))
	{	
		if(i>=stusayi)
		{
			break;
		}
		if(stu[i]->id == uid)
		{
			index = i;
			break;
		}
		i++;	
	}
	if(index == -1)
	{
		cout<<"Kayit Bulunamadi"<<endl;
	}
	else
	{
		cout<<endl;
		cout<<"id : "<<stu[index]->id<<endl;
		cout<<"Name : "<<stu[index]->name<<endl;
		cout<<"Surename : "<<stu[index]->surname<<endl;
		cout<<"Lutfen Guncellemek Istediginiz Bilgiyi Tuslayiniz"<<endl;
		cout<<"Name(n/N) Surname(s/S)"<<endl;
		char yeniislem;
		cin>>yeniislem;
		switch (yeniislem)
		{
			case 'n':
			case 'N':
				cout<<"Student Name : ";
				cin>>stu[index]->name;
				break;			
			case 's':
			case 'S':
				cout<<"Student Surname : ";
				cin>>stu[index]->surname;
				break;
			default:
				break;
		}
		
	}					
}

bool remove(student *stu[],int rid,int stusayi)
{
	int  i = -1;
	bool Varmi = 0;
	while((stu[++i] != NULL))
	{
		if(stu[i]->id == rid)
		{
			Varmi = 1;
			break;
		}
	}
	
	if(Varmi==0)
	{
		cout<<endl<<rid<<" numarali kayit bulunamadi"<<endl;
	}
	else
	{	
		while((stu[i] != NULL))
		{
			if(i>=stusayi-1)
			{
				break;
			}
			stu[i] = stu[i+1];
			i++;		
		}
		stu[i] = NULL;
	}
	return Varmi;
}

void search(student *stu[],int stusayi,char sislem)
{
	switch (sislem)
	{
		case 'i':
		case 'I':
			{		
				int id;
				cout<<"Id Numarasini Giriniz : "<<endl;
				cin>>id;
				int i = -1;
				while((stu[++i] != NULL))
				{
					if(i>=stusayi)
					{
						break;
					}			
					if(stu[i]->id == id)
					{
						cout<<"Student Id : "<<stu[i]->id<<endl;
						cout<<"Student Name : "<<stu[i]->name<<endl;
						cout<<"Student Surname : "<<stu[i]->surname<<endl;
						cout<<"------------------------------"<<endl;
					}
				}
				break;
			}		
		case 'n':
		case 'N':
			{			
				string sname;
				cout<<"Name'i Giriniz : "<<endl;
				cin>>sname;
				int i = -1;
				while((stu[++i] != NULL))
				{
					if(i>=stusayi)
					{
						break;
					}			
					if(stu[i]->name == sname)
					{
						cout<<"Student Id : "<<stu[i]->id<<endl;
						cout<<"Student Name : "<<stu[i]->name<<endl;
						cout<<"Student Surname : "<<stu[i]->surname<<endl;
						cout<<"------------------------------"<<endl;
					}
				}
				break;
			}						
		case 's':
		case 'S':
			{
				string ssurname;
				cout<<"Surname'i Giriniz : "<<endl;
				cin>>ssurname;
				int i = -1;
				while((stu[++i] != NULL))
				{
					if(i>=stusayi)
					{
						break;
					}			
					if(stu[i]->surname ==  ssurname)
					{
						cout<<"Student Id : "<<stu[i]->id<<endl;
						cout<<"Student Name : "<<stu[i]->name<<endl;
						cout<<"Student Surname : "<<stu[i]->surname<<endl;
						cout<<"------------------------------"<<endl;
					}
				}
				break;
			}							
	}
}

int main(int argc, char** argv) {

	int stusayi = 10;
	student *stu[stusayi] = {};	

//	bool varMi = false;
	

	char islem;
	int i = 0;	
	int ii = 1;
	
	while(ii)
	{
		cout<<"Lutfen Yapmak Istediginiz Islemi Tuslayiniz"<<endl;
		cout<<"1. Insert (i/I)"<<endl<<"2. Update(u/U)"<<endl<<"3. Remove (r/R)"<<endl;
		cout<<"4. Search (s/S)"<<endl<<"5. Print(p/P)"<<endl<<"6. Exit(e/E)"<<endl;
		cin>>islem;
		switch(islem)
		{
			case 'i':																			
			case 'I':
				insert(stu,i++,stusayi);
				break;
				
			case 'u':
			case 'U':						
				int uid;
				cout<< "update yapmak istediginiz ogrencinin idsini giriniz: ";
				cin>>uid;
				update(stu,uid,stusayi);
				break;
			case 'r':
			case 'R':				
					int rid;
					bool silindimi;
					cout<<"Silmek Istediginiz Ogrencinin Id'sini Giriniz"<<endl;
					cin>>rid;
					silindimi = remove(stu,rid,stusayi);
					if(silindimi)
					{
						i--;
					}
					break;
					
			case 'p':
				print(stu,stusayi);
				break;
				
			case 'P':
				print(stu,stusayi);
				break;																	
			case 's':
			case 'S':			
					char sislem;
					cout<<"Arama Parametresini Giriniz"<<endl;
					cout<<"Id (i/I) Name(n/N) Surname(s/S)"<<endl;
					cin>>sislem;
					search(stu,stusayi,sislem);
					break;				

			case 'e':
			case 'E':
				ii = 0;
				break;							
		}
	}
	
	return 0;
}
