#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	string password = "Anan";
	string answer;
	
	cout<<"Parolayi giriniz: ";
	cin>>answer;
	
	if(password == answer)
	{
		cout<<"Dogru parola.";
	}
	else
	{
		cout<<"Yanlis parola.";
	}
	
	
	return 0;
}
