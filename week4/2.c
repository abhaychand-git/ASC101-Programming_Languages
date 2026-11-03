// Sum of first N natural numbers using loop.
#include<stdio.h>
int main(){
    int n,i = 1, f = 0;
    printf("Enter the Number:");
    scanf("%d",&n);
    for(i ; i <= n; i++){ 
        printf("%d\n", i);
    }

    return 0;
}