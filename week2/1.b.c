// 1.b Swap two numbers using extra variable.
#include<stdio.h>
int main(){

    int a, b;

    printf("Enter first Number: ");
    scanf("%d",&a);

    printf("Enter another number: ");
    scanf("%d",&b);

    printf("The original value of a and b is %d and %d respectively.\n", a, b);

a = a + b;
b = a - b;
a = a - b;

    printf("The new value of a and b is %d and %d respectively.\n", a, b);
}
