#include<stdio.h>
int main(){
    int marks;
    printf("Enter a marks: ");
    scanf("%d",&marks);
    if(marks>90){
      printf("A\n");
    }
    else if(marks>80){
      printf("B\n");
    }
    else if(marks>70){
      printf("C\n");
    }
    else if(marks>60){
      printf("D\n");
    }
    else{
      printf("F\n");
    }
    return 0;
}


