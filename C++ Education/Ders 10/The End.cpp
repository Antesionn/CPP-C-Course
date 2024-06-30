#include <iostream>

using namespace std;

class Test
{
	private:
		int a,b;
	public:
		void set_a_b(int,int);
		int get_a();
		int get_b();
		Test(int _a,int _b)
		{
			a = _a;
			b = _b;
			
		}
		
		Test operator+(const Test& c)
		{
			Test test;
			test.a = a + c.a;
			test.b = b + c.b;
			return test;
		}
		
		Test operator++()
		{
			++a;
			++b;
			return Test(a,b);
		}
};

void Test::set_a_b(int _a, int _b)
{
	a = _a;
	b = _b;
}

int Test::get_a()
{
	return a;
}

int Test::get_b()
{
	return b;
}

int main(int argc, char** argv) {
	
	Test x,y,z;
	
	x.set_a_b(15,20);
	y.set_a_b(30,35);
		
	z = x + y;
	
	cout<<z.get_a()<<endl<<z.get_b()<<endl<<endl;
	
	++z;

	cout<<z.get_a()<<endl<<z.get_b();

	return 0;
}
