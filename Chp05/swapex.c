/* 
 * File:   swapex.c
 * Author: wpower
 *
 * Created on September 16, 2015, 10:37 AM
 */

#include <stdio.h>
#include <stdlib.h>

void swap( int *a, int *b);
void swap_wontwork( int, int);

/*
 * Parameter Passing in C is pass by value!!!!
 * 
 * To make the obvious swap work, we have to pass parameters
 * as pointers to their values, not the values themselves.
 * 
 * This lets us follow those pointers to do things and make changes.
 * 
 * Note how you have to pass addresses to the swap function, not values.
 * This is obvious because the & is used to return addresses of the values in
 * the call to the swap function.
 * 
 * We also need to declare the parameter types in the function signature as
 * type of pointer to int, not just type int.
 *
 */

int main(int argc, char** argv) {
    int x = 5, y = 3;
    swap_wontwork( x, y );
    printf( "%d , %d\n", x, y );
    
    swap( &x, &y );
    printf( "%d , %d\n", x, y );
    
    return (EXIT_SUCCESS);
}

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap_wontwork(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}