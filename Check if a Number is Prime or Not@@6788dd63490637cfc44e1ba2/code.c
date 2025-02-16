#include<stdio.h>
int main(){
    int num,i;
    scanf("%d",&num);
    if (num<=1) {
       printf("Not Prime\n");
       } 
    for (i = 2; i * i <=num; i++){
        if (num % i==0){
        printf("Prime");
    } }
    else {
        printf("Not Prime");
    }
    return 0;
}