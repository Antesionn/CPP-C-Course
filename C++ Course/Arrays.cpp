#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
/*	int array[3];
	array[0] = 10;
	array[1] = 20;
	array[2] = 30;
	
	cout<<array[0]<<endl<<array[1]<<endl<<array[2];
*/	
/*
	int array2[] = {10,20,30};
*/	

	string array3[3];
	
	for(int i=0;i<3;i++)
	{
		cin>>array3[i];	
	}	
	
	for(int i=0;i<3;i++)
	{
		cout<<i<<". index degeri: "<<array3[i]<<endl;
	}
	
	return 0;
}
