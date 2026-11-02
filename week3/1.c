// 1. Find the largest of three numbers.
#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the number:");
scanf("%d %d %d",&a,&b,&c);
if (a>b){
    if (a>c)
    printf("%d is the greatest",a);
}
if (b>c){
    printf("%d is the greatest",b);
}
else{
    printf("%d is the greatest",c);
}
return 0;
}