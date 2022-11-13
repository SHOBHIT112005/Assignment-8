#include<stdio.h>
int main()
{
    int i,j,n=1;
    for(i=0;i<4;i++)
    {
        for(j=0,n=1;j<7;j++)
        {
            if((j>i+1)||(j<4-i))
            {
                printf("%d",n);
                if(j<3)//Doubt
                n++;
                else
                n--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}