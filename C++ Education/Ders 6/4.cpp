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
		~Box();	
		int c;
		void set_a(int);
		void set_b(int);
		void set_a_b(int,int);
		int get_a();
		int get_b();
		int *p;
		int get_p();
		friend print(Box box); 			//print fonksiyonunu arkadaþ olarak tanýmladýk.
};

int Box::get_p()
{
	return *p;
}

Box::Box()
{
	cout<<"Constructor is empty"<<endl;
	p = new int;
	*p = 20;
}

Box::Box(const Box &obj)
{
	cout<<"Copy constractor"<<endl;
	p = new int;
	*p = *obj.p;
}

Box::~Box()
{
	cout<<"Destructor"<<endl;
	delete p;
	p = NULL;
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

void Box::get_b()
{
	return b;
}
void Box::set_a_c(int _a, int _b)
{
	a = _a;
	b = _b;
}

int main() {
	
	Box *mybox;
	mybox = new Box;
	Box *mybox1 = new Box(*mybox);

	return 0;
}
