#include <iostream>
using namespace std;

class Box
{

	private:
		int a;
		int *p;					//Destructorda silmek icin
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
}																		//Nesneyi yoketmek icin destructor kullan.~

Box::~Box()
{
	cout<<"Destructor";
	delete p;
	p = NULL;										//Nesne silinince *p silinmez. Onu silmek icin Destructor kullandik.
}

int main() {
	
	Box *mybox;		
	mybox = new Box(11,21);					//its a pointer now
	cout<<mybox->get_a()<<endl;
	cout<<mybox->get_b()<<endl;
	delete mybox;						//Destructor nesneyi sildigimiz an baslar.
	mybox = NULL;
	
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
