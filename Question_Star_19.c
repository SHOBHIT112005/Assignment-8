#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<19;j++)
        {
            if(((j>=3-i)&&(j<=6+i))||((j>=12-i)&&(j<=15+i)))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    for(i=4;i<13;i++)
    {
        for(j=1;j<19;j++)
        {
            if((j>=i-2)&&(j<=22-i))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}