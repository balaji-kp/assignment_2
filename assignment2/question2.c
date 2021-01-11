#include <stdio.h>
#include <stdlib.h>
void even_row(int i)
{
    for(int a=1;a<=i;a++)
    {
        if(a%2==0){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    printf("\n");
}
void odd_row(int i)
{
    for(int a=1;a<=i;a++)
    {
        if(a%2==0){
            printf("0");
        }
        else{
            printf("1");
        }
    }
    printf("\n");
}
int main()
{
    for(int i=1;i<=5;i++)
        {
            if (i%2==0)
            {
                even_row(i);
            }
            else
            {
                odd_row(i);
            }
        }
    return 0;
}


