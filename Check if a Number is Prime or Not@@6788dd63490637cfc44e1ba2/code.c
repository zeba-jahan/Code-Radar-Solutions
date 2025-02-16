#include<stdio.h>
int main(){
    int num,i;
    scanf("%d",&num);
    for (i =2; i * i; i++){
    if (num>1 && num%i==0) {
        printf("Prime");
    } }
    else {
        printf("Not Prime");
    }
    return 0;
}