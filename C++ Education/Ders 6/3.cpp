#include <iostream>
using namespace std;

class Box
{

	private:
		int a;
	protected:
		int b;
	public:
		Box();						//Constructor
		~Box();						//Destructor
		Box(int,int);
		int c;
		void set_a(int);
		void set_b(int);
		void set_a_b(int,int);
		int get_a();
		int get_b();
		int get_a_b();
		int *p;	
		int get_p();
};

int Box::get_p()
{
	return *p;
}

Box::Box()
{
	cout<<"Constructor is empty"<<endl;
}

Box::Box(int _a,int _b)
{
	cout<<"Constructor with value"<<endl;
	a = _a;
	b = _b;
	p = new int;
	*p = 15;
}								

Box::~Box()
{
	cout<<"Destructor";
	delete p;
	p = NULL;							
}


int main() {
	
	Box *mybox;
	Box *mybox1;	
	mybox = new Box(11,21);		
	mybox1 = new Box;
	mybox1 = mybox;												//copy constructor
	cout<<mybox->get_a()<<endl;
	cout<<mybox->get_b()<<endl;
	cout<<mybox1->get_p()<<endl;

	delete mybox;					
	mybox = NULL;
	
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
