#include<stdio.h>
void main()
{
    int a[10],i;
    printf("Enter array elements\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements are\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}