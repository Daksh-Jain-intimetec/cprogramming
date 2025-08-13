#include<stdio.h>

int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Befor Swap a = %d b = %d\n",a,b);
    int temp=0;
    temp = a;
    a = b;
    b = temp;
    printf("After Swap a = %d b = %d",a,b);
    return 0;
}