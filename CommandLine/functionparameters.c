/* 
 * File:   functionparameters.c
 * Author: wpower
 *
 * Created on September 30, 2015, 9:52 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * <Function Parameters>
 * 
 * We can pass functions to other functions as a parameter.  
 * 
 * We can pass pointers to a function to a a funciton, or we can write an
 * anoynmos one.
 * 
 * For example, to generalize qsort, we can pass a comparison function to use.
 * 
 * This works because void is a data type.  Any datatype can be passed to a 
 * parameter with type void.  We still have to define that we are using a 
 * pointer to void. 
 * 
 * Below is an example of the use of void in function signatures.  Also, note
 * the way the function is defined in the function parameter list.
 */
int qsort( void**, void, void, int );
int qsort( void** v, void lo, void hi, int (comp)(void*, void*) ){
    ;
}

int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

