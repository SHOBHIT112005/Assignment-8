#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
        {
            if((i==0)||(i==j)||(j==(8-i)))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}