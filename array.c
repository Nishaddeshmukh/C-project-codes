#include<stdio.h>


main()
{

	int x;
	static a[3]={1};   ----------------->  valid syntax    
	int b[3]={1};

	printf(" %d ", a[2]);
	printf(" %d ", b[2]);


	//output --> 0,0



}
