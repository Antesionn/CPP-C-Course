#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	
	//const koydugun hicbir seyi sonradan degistiremiyorsun.
	
	const int array[] = {1,2,3,4,5};
	
	array[3] = 5;
	
	cout<<array[3];
	
	
	
	
	
	
	return 0;
}
