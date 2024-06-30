#include <iostream>
using namespace std;

class Box
{

	private:
		int a;
	protected:
		int b;
	public:
		Box();
		Box(int,int);
		int c;
		void set_a(int);
		void set_b(int);
		void set_a_b(int,int);
		int get_a();
		int get_b();
		int get_a_b();
};

Box::Box()
{
	cout<<"Constructor is empty"<<endl;
}

Box::Box(int _a,int _b)
{
	cout<<"Constructor with value"<<endl;
	a = _a;
	b = _b;
}

int main() {
	
	Box mybox(11,21);				//Parantez ýkmadan caslistirirsam  emptyo olan constructoru cagirir. 	
	cout<<mybox.get_a()<<endl;		//11 ve 21 nesne oluþurken initial ediliyor.
	cout<<mybox.get_b()<<endl;
/*	mybox.set_a(5);
	cout<<mybox.get_a()<<endl;
	mybox.set_b(7);
	cout<<mybox.get_b()<<endl;
	mybox.set_a_b(10,20);
	cout<<mybox.get_a()<<"  "<<mybox.get_b();*/
	return 0;
}

void Box::set_a(int _a)
{	
	a = _a;
}

int Box::get_a()
{
	return a;
}

void Box::set_b(int _b)
{	
	b = _b;
}


int Box::get_b()
{
	return b;
}

void Box::set_a_b(int _a,int _b)
{
	a = _a;
	b = _b;
}
