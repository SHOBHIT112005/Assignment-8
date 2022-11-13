#include<stdio.h>
int main()
{
    int i,j;
    char c='A';
    for(i=0;i<8;i++)
    {
        for(j=0,c='A';j<13;j++)
        {
            if((j>=7-i)&&(j<=5+i))
            printf(" ");
            else
            {
                printf("%c",c);
                if(j<6)//Doubt
                c++;
                else
                c--;
            }
        }
        printf("\n");
    }
    return 0;
}