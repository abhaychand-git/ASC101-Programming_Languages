// Grade calculator (marks → A/B/C/D/F).
#include<stdio.h>
int main(){
    int grade;
    printf("Enter Your Score: ");
    scanf("%d",&grade);
    if (100 > grade && grade >= 90){
        printf("A");
    }
    else if (90 > grade && grade >= 80){
        printf("B");
    }
    else if (80 > grade && grade >= 70){
        printf("C");
    }
    else if (70 > grade && grade >= 60){
        printf("D");
    }
    else if ( 60 > grade && grade >= 0){
        printf("E");
    }
    else{
        printf("Invalid entry");
    }
return 0;
}