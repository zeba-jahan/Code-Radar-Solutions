#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enetr a number: ",&a,&b,&c);
    scanf("%d %d %d",&a,&b,&c);
    if (a > b && b > c && c > a)
    {
        printf("Enter a maximum number: ");
    }
   return 0; 
}

