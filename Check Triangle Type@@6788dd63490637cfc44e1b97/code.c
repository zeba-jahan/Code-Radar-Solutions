#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a number: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a == b && b == c){
        printf("Equilateral\n");
    }
    else if (a == b || b == c || a == c){
        printf("Isosceles\n");
    }
    else {
        printf("Scalane\n");
    }
    return 0;
}

