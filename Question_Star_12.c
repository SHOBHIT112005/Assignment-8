#include<stdio.h>
int main()
{
    int i,j;
    char c='A';
    for(i=0;i<5;i++)
    {
        for(j=0,c='A';j<7;j++)
        {
            if((j>=i)&&(j<=6-i))
            {
                printf("%c",c);
                if(j<3)
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