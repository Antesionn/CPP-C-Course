#include <iostream>
using namespace std;

class Box{
	private:
		
		int a;
		int b;
		
	public:
		
		Box(int,int);
		Box(const Box&);
		~Box();
		
		int *z;
		
		int geta();
		int getb();

};

Box::Box(int _a,int _b)
{
	cout<<"Constructor with parameters"<<endl;
	a = _a;
	b = _b;
	z = new int;
}

Box::Box(const Box& q)
{
	cout<<"Copy constructor working"<<endl;
	a = q.a;
	b = q.b;
	z = new int(*q.z);
}

Box::~Box()
{
	cout<<"Destructor working"<<"  "<<a<<"  "<<b<<endl;
	delete z;
	z = NULL;
}

int Box::geta()
{
	return a;
}

int Box::getb()
{
	return b;
}

int main(int argc, char** argv) {
	
	Box a(21,42);
	Box a1(a);
	cout<<endl<<"Our object's address: "<<&a<<endl<<"Copy constructor object's address: "<<&a1<<endl;
		
	return 0;
}
