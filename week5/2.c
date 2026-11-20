//  Fibonacci series (first 10 terms).

// Solution:

#include<stdio.h>
int main(){
    int fun(int);
    int a = 0, b = 1, c = 1,m;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);

    c = c + b;
    printf("%d\n",c);
    m = fun(1);
    printf("%d",m);


}


int fun(c){
    int b = 1, x = 1;

    x = 1 + b;
    printf("%d\n",x);
    if (x = 11){
        printf("Done");
    }

    else{
        x = x + fun(c+1);
        printf("%d",c);
        return c;
    }


}
