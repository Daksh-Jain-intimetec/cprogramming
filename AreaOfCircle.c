#include<stdio.h>

int main(){
    float area;
    float radius;
    printf("Enter Radius of Circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("Area of Circle: %f", area);
    return 0;
}