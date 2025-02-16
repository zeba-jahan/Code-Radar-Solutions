#include<stdio.h>
int main(){
    int num ,n=0;
    scanf("%d",&num);
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




       