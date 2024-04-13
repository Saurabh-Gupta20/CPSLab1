#include "mbed.h"
#include <cstdio>

int t1 = 0;
int t2 = 1;
int next_term = t1 + t2;
int max_terms = 8;

int fib(int n){
    // n is the nth term result
    if (n == 0 || n == 1)
        return n;
    else
        return (fib(n-1)+fib(n-2));
}

int main()
{
    printf("Hello, lab program 1 using simple for loop\r\n");
    printf("Fibonacci Sequence: %d, %d, ", t1, t2);
    for(int i = 3; i <= max_terms; i++){
        printf("%d, ", next_term);
        t1 = t2;
        t2 = next_term;
        next_term = t1 + t2;
    }
    printf("\r\n");

    printf("Hello, lab program 1 using recursive \r\n");
    //printf("Fibonacci Sequence: %d, %d, ", t1, t2);
    for(int i = 0; i <= max_terms; i++){
        printf("%d, ", fib(i));
        
    }
    printf("\r\n");
    while (true) {
    }
}

