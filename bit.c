#include<stdio.h>

main()
{
unsigned short  int n=1;

int x=sizeof(n);


printf("\n ---------- complement all bits ------ \n");


printf("\n  %d  \n", x);

n=~ n;

printf("\n  %d  \n", n);

printf("\n  %d \n ", n & 1);


printf("\n ---------- showing one left shift ------ \n");

unsigned short int num;

num = n>>1;


printf("\n %d \n ", num );



num= n<< 15;

printf("\n   %d  \n", num);



///////////rotate\\\\\\\\\\\\\

/* 0000 0000 1000 0000
num = 128;


/* ex:    for 1000   ---> ( 4 bits ) on 3 shifts 0001
 *        so for 16 -----> ( 16 bits ) on  msb will be present at last on 15 shifts ( no of bits - 1) */ 


             

          //only left shift or right shift will not rotate data but data will get lost on shifts.
          //
          //so left shift + msb copy + msb add ------> will work 
          //


/* NOTE :  for 32 bits --> left or right shift should be 32-1 to go from msb to lsb and vice versa.
*/


 





//lets rotate one time 

num =1;

unsigned short  int msb = 0;



msb = num & 1;
num = num >> 1;

printf("\n num --> \n %d ", num );
msb= msb << 15;

printf("\n msb --> \n %d " , msb );

num = num | msb;                //--------------------> 1000 0000 0000 0000 ---> 32768 msb value


printf("\n after shift -->  %d   \n", num  );




// lets rotate 8 time  -----------> expected value 256 

num = 1;
int i=0;
msb =0;

for (i=1;i <=8; i++)
{

	msb  = num & 1;

	num = num >> 1;

	num = num | (msb<<15);

printf(	" \n num value -->  %d  \n ", num );

}


printf (" \n  final  num --->  %d ", num );

}


