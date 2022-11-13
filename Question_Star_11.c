#include<stdio.h>
int main()
{
    int i,j;
    char c='A';
    for(i=0;i<5;i++)
    {
        for(j=0,c='A';j<9;j++)
        {
            if((j>=4-i)&&(j<=4+i))
            {
                printf("%c",c);
                if(j<4)
                c++;
                else
                c--;
            }
            else
            printf(" ");

        }
        printf("\n");
    }
    return 0;   
}