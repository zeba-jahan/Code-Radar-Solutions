#include<stdio.h>
int main(){
    int num;
    
    scanf("%d",&num);
    if (num % 5)
    printf("Divisible\n",num);
    else if (num % 11)
    printf("Divisible\n",num);
    else 
    printf("Not Divisible\n");
    return 0;
}