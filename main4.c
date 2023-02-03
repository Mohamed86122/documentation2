#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,j; 
	int a = 10;
	while(a!=0)
	{
		for (j=1;j<a;j++)
		{
			printf(" ");
		}
	    for ( i = a ; i > 0; i--) 
		{
	        printf("*");
	        a=a/2;
	    }
	    printf("\n");
	    
	}
	
   	
	return 0;
}
