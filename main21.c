#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x , n ,i; 
	
	printf("Donnez dimension du tableau ");
	scanf("%d",&n);
	
	
	int T[n];
	
	printf("Insertion du tableau \n");
	for(i=0;i<n;i++)
	{
		printf("A[%d]",i);
		scanf("%d",&T[i]);
		
	}
	
	printf("\n Donnez un entier ");
	scanf("%d",&x);
	
	printf("Affichage du tableau avec entier X \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t ",T[i]);
	}
	
	
	
	for(i=0;i<n;i++)
	{
		if(T[i]==x)
		{
			int j;
	        for (j = i; j < n - 1; j++) {
	            T[j] = T[j + 1];
	        }
	        n--;
	        i--;
		}	
	}
	printf("\n Affichage du tableau sans entier X \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t ",T[i]);
	}
	return 0;
}
