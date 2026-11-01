// 2. Check if a number is even or odd.
#include<stdio.h>
int main(){
    int num;
    printf("Enter any Number: ");
    scanf("%d",&num);
    if (num % 2 == 0){
        printf("The given number is Even\n");
    }
    else{
        printf("The given number is Odd");
    }
    return 0;
}