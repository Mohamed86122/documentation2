#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i,j,L,C;
	
	printf("donner les lignes:");
	scanf("%d",&L);
	printf("donner les colonnes:");
	scanf("%d",&C);
	int T[L][C];
	int T1[L*C];
	int k=0;
	for(i=0;i<L;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("T[%d][%d]",i,j);
			scanf("%d",&T[i][j]);
		}
	}
	for(i=0;i<L;i++)
	{
		for(j=0;j<C;j++)
		{
			T1[k++]=T[i][j];
		}
	}
	
	//affichage de tableau dimension 
	for(i=0;i<(L*C);i++)
	{
		printf("%d \t",T1[i]);
			
	}
	return 0;
}
