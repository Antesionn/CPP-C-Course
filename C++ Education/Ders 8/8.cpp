#include <iostream>

using namespace std;

class Base					//Diamond Miras konusu.
{
	protected:
	public:
		Base();
		~Base();
};

Base::~Base()
{
	cout<<"Base deleted"<<endl;
}

Base::Base()
{
	static int a=0;
	cout<<"Base Constructor"<<endl<<"A = "<<a<<endl;
	a++;
}

class Left: virtual public Base				//Iki kez Base i cagirmamasi icin ara katmana vitrual yaziyoruz.
{
	public:
		Left();
		~Left();
};

Left::~Left()
{
	cout<<"Left deleted"<<endl;
}

Left::Left()
{
	cout<<"Left Constructor"<<endl;
}

class Right: virtual public Base
{
	public:
		Right();
		~Right();
	
};

Right::~Right()
{
	cout<<"Right deleted"<<endl;
}

Right::Right()
{
	cout<<"Right Constructor"<<endl;
}

class Child : public Left, Right
{
	public:
		Child();
		~Child();
};

Child::~Child()
{
	cout<<"Child deleted"<<endl;
}

Child::Child()
{
	cout<<"Child Constructor"<<endl;
}

int main(int argc, char** argv) {
	
	Child *chld = new Child;
	
	delete chld;
	chld = NULL;
	return 0;
}
