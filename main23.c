#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int nbr ; 
	printf("donner un chiffre ");
	scanf("%d",&nbr);
	int cpt=0;
	while(cpt<3)
	{
		nbr = nbr +1 ;
		printf("%d \t",nbr);
		cpt++;
	}
	
	
	
	return 0;
}
