#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int nbr=0,pos=0,n,i,j;
	
	printf("donner dimension du tableau ");
	scanf("%d",&n);
	
	
	int T[n];
	//insertion
	for(i=0;i<n;i++)
	{
		printf("T[%d]",i);
		scanf("%d",&T[i]);
	}
	
	//Affichage du tableau 
	
	
	for(i=0;i<n-1;i++)
	{
		
			if(T[i]>=T[i+1])
			{
				pos=i;
				nbr++;
					  
		    }
		    else 
		    {
		        printf("%d ",nbr);
		        nbr = 0;
		    }
	}
	if(nbr != 0) printf("%d", nbr);
	
	return 0;
}
