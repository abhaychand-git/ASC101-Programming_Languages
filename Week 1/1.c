// 1. Print your name and branch
#include<stdio.h>
int main()
{   char first_name[100], last_name[100], branch[100];
    printf("Enter Your first name:\n");
    scanf("%s",&first_name);
    printf("Enter Your  last name name:\n");
    scanf("%s",&last_name);
    printf("Enter Your Branch:\n");
    scanf("%s",&branch);
    printf("My name is %s %s and my branch is %s\n",first_name,last_name,branch);
    return 0;
}