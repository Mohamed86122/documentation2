#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i , j ,cpt,nbr;
    printf("Donner dimension du tableau ");
    scanf("%d",&n);

    printf("Donner le nombre ");
    scanf("%d",&nbr);

    int T[n];
    //Insertion du tableau
    for(i=0;i<n;i++)
    {
        printf("T[%d]",i);
        scanf("%d",&T[i]);

    }
    cpt = 0;
    for(i=0;i<n;i++)
    {
            if(T[i]==nbr)
            {
                cpt++;

            }
    }
    printf("%d",cpt);
    return 0;
}
