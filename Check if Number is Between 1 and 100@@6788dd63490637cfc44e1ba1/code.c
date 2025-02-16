#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d",&num1,&num2);
    if (num1>=1 && num2<=100){
        printf("In Range");
    }
    else {
        printf("Out of Range");
    }
    return 0;
}

