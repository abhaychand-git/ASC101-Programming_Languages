//3. Find area of a rectangle. 
#include<stdio.h>
int main(){

    int length, breadth, Area;

    printf("Enter the Lenth:\n");
    scanf("%d",&length);

    printf("Enter the Bredth:\n");
    scanf("%d",&breadth);

    Area = length*breadth;
    printf("The area of a rectangele with length %d and breadth %d is %d", length, breadth, Area);
}