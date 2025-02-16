#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    for (i=1; i<=n; i++){
        printf("%d",i);
        sum = sum + i;
    }
    printf("sum is %d",sum);
    return 0;
}