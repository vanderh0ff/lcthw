#include <stdio.h>
#include <malloc.h>

long factorial(int );
long combination(int , int );
long algorithm(int, int, int, int);

int main(int argc, char *argv[])
{
    return 0;
}

long factorial(int n)
{
    int c = n;
    long result = 1;
    for (c = 1; c <= n; c++){
        result *= c;
    }
    return result;
}

long combination(int n, int k)
{
    long result = factorial(n) / (factorial(k) * factorial (n-k));
    return result;
}

void update_state(int *state, int num)
{
    int i;
    for (i = 0; i < num; i++){
        state[i] -= 1;
    }
}

void print_state(int *state, int length)
{
    int i;
    for ( i = 0; i < length; i++){
        printf("%d,",state[i]);
    }
    printf("\n");
}


long algorithm(int m, int n, int s, int t)
{
    long result = 1;
    int * state = calloc(n, sizeof(int));
    int i;
    for (i = 0; i < t; i++){
        state[i] = t;
    }
    return result;
}
