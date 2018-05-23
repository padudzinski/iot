#include <stdio.h>
/*
    little program to calculate fibonacci, figured I would try it recursively
*/
int fibonacci(int n);

int main(){
    int num_digits = 6;
    int i;
    for (i = 0; i < num_digits; i++){
        printf("%i ", fibonacci(i));
    }
    printf("\n");
}

int fibonacci(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
