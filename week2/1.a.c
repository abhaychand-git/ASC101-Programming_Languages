// 1.a Swap two numbers using extra variable.
#include<stdio.h>
int main(){

    int a, b, c;

    printf("Enter first Number: ");
    scanf("%d",&a);

    printf("Enter another number: ");
    scanf("%d",&b);

    printf("The original value of a and b is %d and %d respectively.\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("The new value of a and b is %d and %d respectively.\n", a, b);
}
