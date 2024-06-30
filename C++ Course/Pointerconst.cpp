#include <iostream>
using namespace std;


void print(const int *p1,const int *p2,int size);

int main(int argc, char** argv) {
	
	int array[] = {1,2,3,4,5,6,7,8,9,10};
	
	print(array+2,array+9,10);
	
	return 0;
}

void print(const int *p1,const int *p2,int size)
{
	for(int *p1; *p1 != *p2; *p1++)
	{
		cout<<"Eleman: "<<*p1<<endl;
	}
}
