#include<stdio.h>
int main(){
    int num ,n=0;
    scanf("%d",&num);
    // if (num>1) {
    //     printf("Prime");
    // }
    // else if (num%2==0 || num%3==0  || num%5==0 ){
    //     printf("Prime");
    // }
    // else  

    for(int i=1;i<=num;i++){
        if(num%i==0){
            n++;
        }
    }
    if(n>2){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
  
    
}




       