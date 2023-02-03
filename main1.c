#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,i,j,nbr; 
	printf("donner dimension du tableau");
	scanf("%d",&n);
	
	int T[n+1];
	//Insertion
	for(i=0;i<n;i++)
	{
		printf("T[%d]",i);
		scanf("%d",&T[i]);
	}
	printf("Tableau avant tries  ");
	for(i=0;i<n;i++)
	{
		
		printf("%d \t",T[i]);
	}
	
	printf("\n Tableau apres tries  ");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(T[i]>=T[j])
			{
				int pos = T[i];
				T[i]=T[j];
				T[j]=pos;
			}
		}
		printf("%d \t",T[i]);
	}
	printf("\n Donner un nombre ");
	scanf("%d",&nbr);
	
 for (i = 0; i < n; i++) {
        if (T[i] > nbr) {
            for (j = n; j > i; j--) {
                T[j] = T[j - 1];
            }
            T[i] = nbr;
            break;
        }
    }
    printf("\nTableau apres l'insertion: ");
    for (i = 0; i < n + 1; i++) {
        printf("%d\t", T[i]);
    }
	return 0;
}
