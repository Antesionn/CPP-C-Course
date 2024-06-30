#include <iostream>
using namespace std;

void print(int *p,int size);

int main(int argc, char** argv) {
	
	int array[] = {1,2,3,4,5,6,7};

	print(array,5);						//boyutu da gönderdik;
	
	return 0;
}

void print(int *p,int size)				//size yani boyutunu da göndermeliyiz
{										//burada pointer yerine f[] gibi bi array de koyabilirdik.
	for(int i=0;i<size;i++)				
	{
		cout<<p[i]<<endl;
	}
}
