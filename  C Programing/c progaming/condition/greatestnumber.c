#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d is the greatest number",a);
    }
    else if(b>a)
    {
        printf("%d is the greatest number",b);
    }
    else
    {
        printf("Both number are equal");
    }
}