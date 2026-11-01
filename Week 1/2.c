// 2. Add two numbers entered by user.
#include<stdio.h>
int main(){

    int x, y, sum;

    printf("Enter first number:\n");
    scanf("%d", &x);

    printf("Enter another number:\n");
    scanf("%d", &y);
    
    sum = x + y;

    printf("The sum of %d and %d is %d", x, y, sum);
    return 0;
}