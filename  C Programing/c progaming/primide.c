#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=5-i;j++){
            printf("   ");
        }
        for(k=i;k<=2 *i-1;k++){
            printf("*  ");
        }
        for(k=1;k<=i-1;k++)
        {
            printf("*  ");
        }
        printf("\n");

    }
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++){
            printf("   ");
        }
        for(k=i;k<=2 *i-1;k++){
            printf("*  ");
        }
        for(k=1;k<=i-1;k++)
        {
            printf("*  ");
        }
        printf("\n");

    }
}