#include<stdio.h>
int main(){
   int age;
   printf("Enter your age\n");
   scanf("%d",&age);
   if(age>18)
   {
    printf("Access granted");
   }
   else
   {
    printf("Access diened");
   }
}