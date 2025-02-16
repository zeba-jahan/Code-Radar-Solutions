#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(marks>=90){
        printf('A');
    }
    else if(marks>=80 and marks<90){
        printf('B');
    }
    else if(marks>=70 and marks<80){
        printf('C');
    }
    else if(marks>=60 and marks<70){
        printf('D');
    }
    else{
        printf('F');
    }
    return 0;
}


