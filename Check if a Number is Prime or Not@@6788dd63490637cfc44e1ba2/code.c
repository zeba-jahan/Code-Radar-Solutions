#include<stdio.h>
int main(){
    int num ,n;
    scanf("%d",&num);
    // if (num>1) {
    //     printf("Prime");
    // }
    // else if (num%2==0 || num%3==0  || num%5==0 ){
    //     printf("Prime");
    // }
    // else  
    n = num/2;
    if(num>=2){
        if(num%n==0){
            printf("Not Prime");

        }
        else{
            printf("Prime");
        }
    }

    
}




       