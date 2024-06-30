#include <iostream>

using namespace std;

class Base										//MIRAS.
{
	public:
		void f();
	
};

void Base::f()
{
	cout<<"Ok."<<endl;
}

class Altclass: public Base
{
	public:
		void f();
};

void Altclass::f()
{
	cout<<"Altclass"<<endl;
}

int main(int argc, char** argv) {
	
	Base nesne;
	Altclass alt;
	alt.f();
	nesne.f();
	
	return 0;
}
