#include<stdio.h>
void check_lsb(int n){
    if (n & 1)
    printf("The LSB of %d is set (1).\n",n);
    else
        printf("The LSB of %d is not set (0).\n",n);
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    check_lsb(num);
    return 0;
}