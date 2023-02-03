#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr,cpt=0 ;
    printf("donner un nombre");
    scanf("%d",&nbr);

    while(nbr!=1)
    {
        if(nbr%2 == 0)
        {
            nbr=nbr/2;

        }
        else {
            nbr = 3 * nbr +1;
        }
        cpt++;

    }
    printf("%d",cpt);


    return 0;
}
