#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	string sys_username = "fatihozkurt_",username;
	int sys_password = 123456 ,password;
	
	cout<<"Kullanici adini giriniz: ";
	cin>>username;
	cout<<"Parolayi giriniz: ";
	cin>>password;
	
	if(sys_username == username && sys_password == password)
	{
		cout<<"Hos geldiniz :)";
	}
	else if(sys_username != username && sys_password == password)
	{
		cout<<"Kullanici adi yanlis!";
	}
	else if(sys_username == username && sys_password != password)
	{
		cout<<"Parola yanlis!";
	}
	else if(sys_username != username && sys_password != password)
	{
		cout<<"Kullanici adi ve parola yanlis!";
	}
	
	
	return 0;
}
