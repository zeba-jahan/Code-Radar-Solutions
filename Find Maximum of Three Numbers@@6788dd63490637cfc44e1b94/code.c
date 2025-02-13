#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a number: ",&a,&b,&c);
    scanf("%d %d %d",&a,&b,&c);
    if (a > b && b > c && c > a)
    {
        printf("%d\n",a,b,c);
    }
   return 0; 
}

