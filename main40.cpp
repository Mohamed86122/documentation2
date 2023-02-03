#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int nbr,st=0; 
	
	while(1)
	{
	
		printf("donner un nombre");
		scanf("%d",&nbr);
		
		if(nbr<=0)
		{
			break;
		}
		st=nbr + st/10  ;
	}
	printf("%d",st);
	return 0;
}
