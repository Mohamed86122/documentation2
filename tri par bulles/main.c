#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i , j ;
    printf("Donner dimension du tableau ");
    scanf("%d",&n);


    int T[n];
    //Insertion du tableau
    for(i=0;i<n;i++)
    {
        printf("T[%d]",i);
        scanf("%d",&T[i]);

    }
    bool ch = false;
    //Operation
    for(i=0;i<n;i++)
    {
        for(j=i+1; i<n-1;j++)
        {
            if(T[i]>=T[i+1])
            {

                int cp=0;
                cp=T[i];
                T[i]=T[i+1];
                T[i+1]=cp;
                ch = true ;
            }

        }

    }
    //AFFICHAGE DU TABLEAU
    for (i=0; i<n;i++)
    {

        printf("%d \t",T[i]);

    }
    return 0;
}
