#include <iostream>

using namespace std;

class Base					//Polimorpheism ve virtual destructor konusu.
{
	public:
		Base(); 
		virtual ~Base();		//virtual olmazsa sadece base i siler
};

Base::Base()
{
	cout<<"Base uretildi"<<endl;
}

Base::~Base()
{
	cout<<"Base silindi"<<endl;
}

class Left:public Base
{
	public:
		Left();
		~Left();
};

Left::Left()
{
	cout<<"Left uretildi"<<endl;
}

Left::~Left()
{
	cout<<"Left silindi"<<endl;
}

class Right:public Base
{
	public:
		Right();
		~Right();
};

Right::Right()
{
	cout<<"Right uretildi"<<endl;
}

Right::~Right()
{
	cout<<"Right silindi"<<endl;
}


int main(int argc, char** argv) {
	
	Base *p = new Left;
	
	delete p;
	p = NULL;	
	
	return 0;
}
