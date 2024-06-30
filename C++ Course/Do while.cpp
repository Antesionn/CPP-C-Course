#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	 int password = 123456,sys_password;
	 
	 do
	 {
	 	cout<<"Parolayi giriniz: ";
	 	cin>>sys_password;
	 	
	 	if(password != sys_password)
	 	{
	 		cout<<"Parolanizi yanlis girdiniz."<<endl<<endl;
		}
	 }
	 while(password != sys_password);
	
	cout<<"Hos geldiniz :)";
	
	return 0;
}
