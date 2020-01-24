#include <stdio.h>

int main()
{
    int a,b;

    scanf("%d %d", &a, &b);

        if (a < b)
        {
            for(int cnt=0; cnt<b; cnt++)
            {

                printf("%d", a);

            }
        }
        else
        {
            for(int cnt=0; cnt<a; cnt++)
            {

                printf("%d",b);

            }
            
            
        }
        
        printf("\n");
        


    return 0;
}