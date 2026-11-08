//Print prime numbers from 1 to 50.

//Solution:

// Using screaning method: Sieve of Eratosthenes


#include<stdio.h>
int main(){
    int i;
    printf("1\n2\n3\n5\n7\n");
    for(i=2;i<=50;i++){
        if (i%2==0){
        }
        else if (i%3==0){
        }
        else if (i%5==0){
        }
        else if (i%7==0){
        }
        else{
            printf("%d\n",i);
        }

    }
    
return 0;
}