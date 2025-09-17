#include<stdio.h>

int main(){
    int a; 
    scanf("%d", &a); // & is used to give the address of a to scanf function, %d is used for integers
    printf("The value of a is %d", a);
    return 0;
}