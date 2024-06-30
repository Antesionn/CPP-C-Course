#include<iostream>
using namespace std;

class Test
{
	private:
		
		int a;
 		int b;
 		
	public:
		
		void seta(int);
		void setb(int);
		
		int geta();
		int getb();
		
		friend void frfunc(Test q);
};

void Test::seta(int _a)
{
	a = _a;  
}

void Test::setb(int _b)
{
	b = _b;
}

int Test::geta()
{
	return a;
}

int Test::getb()
{
	return b;
}

void frfunc(Test q)
{
    cout<<"a: "<<q.a <<" b: " <<q.b<<endl;
}


int main()
{
	Test *p;
	p = new Test;
	
	p->seta(21);
	p->setb(42);
	
	frfunc(*p);
	
	return 0;
}

