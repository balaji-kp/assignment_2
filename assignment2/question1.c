#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("1\n");
    for(int i=2;i<=4;i++){
        for(int j=1;j<=(i*2)-1;j++){
            if (j%2==0)
                printf("*");
            else{
                printf("%d",i);
            }

        }
         printf("\n");
    }
    return 0;
}






