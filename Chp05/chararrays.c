/* 
 * File:   chararrays.c
 * Author: wpower
 *
 * Created on September 23, 2015, 10:03 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * <Character Arrays or Pointers> 
 * 
 * We can represent strings as two kind of distinct things:
 * 
 *  1) Array of Chars
 *  2) Pointer to the first character.
 */

char messageArr[] = "This is an array";
char *messageP    = "This is also an array, but just points to the first char";  

/*
 * The two have some differences.
 * 
 * For Arrays:
 *      Individual chars can be changed.
 *      Always in the same location in memory.
 * 
 * For pointers:
 *     Refers to a string constant that ends in '\0'
 *     Can point around to different places in memory, makes changing individual chars tough.
 *
 * We can see that the pointer and array notations are just syntactical sugar.
 * The code is only slightly shorter in the pointer version, but they are both
 * equivelant in the end.
 */

void strcopy( char *s, char *t );
void strcopy( char *s, char *t ){
    while( (*s++ = *t++) != '\0' )  //WOA! we copy and increment all at once.  
        ;   //Don't even need an internal function in the while block
}


//The version for arrays is just a little longer.
void strcopy_arr( char s[], char t[] );
void strcopy_arr( char s[], char t[] ){
    int i = 0;
    while( (s[i] = t[i]) != '\0' )    
        i++;   
}

int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

