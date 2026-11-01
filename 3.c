// Simple calculator (+, –, ×, ÷) using if-else.
#include<stdio.h>
int main(){
    int x, y, o;
    float opp;
    printf("Enter first Number: ");
    scanf("%d",&x);

    printf("Enter another number: ");
    scanf("%d",&y);

    printf("Enter Opperation: ");
    scanf("%d",&o);

    if (o == 1){
        opp = x + y;
        printf("The Sum of %d and %d is %f\n", x, y, opp);
    }

    else if (o == 2){
        opp = x - y;
        printf("The diffrence of %d and %d is %f\n", x, y, opp);
    }

    else if (o == 3){
        opp = x*y;
        printf("The product of %d and %d is %f\n", x, y, opp);
    }

    else if (o == 4){
        opp = x/y;
        printf("The division of %d by %d is %f\n", x, y, opp);
    }

    else{
        printf("Invalid Entry!\n");
    }

    return 0;



}