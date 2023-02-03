#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,x,i,j;
	printf("donner dimension du tableau ");
	scanf("%d",&n);
	
	int T[n+1];	//insertion 
	for(i=0;i<n;i++)
	{
		printf("T[%d]",i);
		scanf("%d",&T[i]);
		
	}
	printf("avant tri \n");
	//affichage 
	for(i=0;i<n;i++)
	{
		printf(" %d \t",T[i]);
	}
	//Operation de Tri 
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (T[i]>=T[j])
			{
				int pos = T[i];
				T[i]=T[j];
				T[j]=pos;
			}
		}
	}
	printf("\n apres tri ");
	//affichage 
	for(i=0;i<n;i++)
	{
		printf(" %d \t",T[i]);
	}
	printf("\n Entrer la valeur de x :\n");
	scanf("%d",&x);
	
	for(i=0;i<n;i++)
	{
		T[n+1]=x;
		for(j=n;j>i+1;j--)
		{
			if (T[j]>=T[i])
			{
				int pos = T[j];
				T[j]=T[i];
				T[j]=pos;
			}
		}
		
	}
	//affichage 
	for(i=0;i<n;i++)
	{
		printf(" %d \t",T[i]);
	}
	
	
	return 0;
}
