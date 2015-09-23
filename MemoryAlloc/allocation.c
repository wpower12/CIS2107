/* 
 * File:   allocation.c
 * Author: wpower
 *
 * Created on September 23, 2015, 9:50 AM
 */

#include <stdio.h>
#include <stdlib.h>

/* <Memory Allocation>
 * 
 * In c, we have to be responsible for allocating enough memory for our objects,
 * and fields.  
 * 
 * Allocating memory is the process of finding space inside a buffer of memory
 * that can be assumed to be free, and able to hold the required information.
 * 
 * We can make an approximation of the real allocation process:
 */

#define ALLOCSIZE 10000

static char allocbuff[ALLOCSIZE];   //Our 'Memory'

static char* buffp = allocbuff;     //Pointer to next available space.

/*
 * With this buffer and pointer, we can then define some functions to allocate
 * and free memory in it. 
 */
char* alloc( int ); //Returns a pointer that holds int many characters
void afree(char *); //Frees that pointer.

char* alloc( int n ){
    if( buffp+n<allocbuff+ALLOCSIZE ) { //Check if theres space left
        buffp += n;         //Increment the buffer pointer by n.
        return buffp - n;   //Return the old buffer pointer (it pointed 
                            //to free space, remember?)
    } else {
        return 0;   //Else, we don't have enough room to allocate that many 
                    //Chars, so return 0 as an error indicator.
    }
}

void afree( char *p ){
    //If the pointer we are given points somewhere 'inside' the buffer
    //Then we set the internal buff pointer to that pointer.
    //This essentially 'erases' the data in the old spot, because now
    //we think its empty.
    if( p >= allocbuff && p < allocbuff+ALLOCSIZE ) buffp = p;
}

/*
 * These methods are approxiamtions of what the real allocation methods in c
 * do.  These are 
 *  
 *      malloc(), free(); 
 * 
 * And behave similarly.
 * 
 */

int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

