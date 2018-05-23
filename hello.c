#include <stdio.h>
/*
    Standard hello world program for C so I can program arduino
*/
int main(){
    int number_input;

    printf( "Hello World: \n" );
    scanf( "%d", &number_input );
    printf( "You entered %d\n", number_input );
    getchar();
    return 0;
}
