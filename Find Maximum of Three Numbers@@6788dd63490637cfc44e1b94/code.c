#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a > b && b > c && c > a)
    {
        printf("Output the maximum number: ");
    }
   return 0; 
}