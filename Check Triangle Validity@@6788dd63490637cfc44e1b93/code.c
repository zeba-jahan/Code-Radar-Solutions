#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a + b > c && a + c > b && b + c > a){
        printf("Valid\n");
    }
    else{
        printf("Invalide\n");
    }
    return 0;
    }
    