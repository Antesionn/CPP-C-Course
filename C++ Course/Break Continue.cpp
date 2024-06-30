#include <iostream>

using namespace std;		//Break döngüyü hemen bitirirken continue altýnda ne olursa olsun baþa döndürür.

int main(int argc, char** argv) {
	
	string sys_username = "fatihozkurt_",username,sys_password = "18668798f",password;
	
	while(1)
	{
		cout<<"Kullanici adi: ";
		cin>>username;
		cout<<"Parola: ";
		cin>>password;
		
		if(password == sys_password && username == sys_username)
		{
			cout<<"Hos geldiniz";
			break;
		}
		else if(password == sys_password && username != sys_username)
		{
			cout<<"Hatali kullanici adi."<<endl<<endl;
		}
		else if(password != sys_password && username == sys_username)
		{
			cout<<"Hatali parola."<<endl<<endl;
		}
		else
		{
			cout<<"Kullanici adi ve parola hatali."<<endl<<endl;
		}
	}
	
	
	return 0;
}
