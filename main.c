#include <stdio.h>
#include <stdlib.h>
int main() {
	int i =2 ;
   double  prod=1;
   while (i<=100)
	{
	printf("\n %d",i);
		
		prod*=i;
		i+=2;
	}
	printf("\n product = %d",prod);
	getch();
	
	return 0;
}
