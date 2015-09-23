/* 
 * File:   arraysandpointers.c
 * Author: wpower
 *
 * Created on September 23, 2015, 9:39 AM
 */

#include <stdio.h>
#include <stdlib.h>

/* <Arrays and Pointers> 
 * 
 * In c, arrays are just sequential elements in memory, so the variable we use 
 * to represent them is really just a pointer to the first slot in memory.
 * 
 * If you create a variable that points to the first element in an array, and
 * then increment the pointer, it will point to the next element in the array.
 * 
 *      int *pa = &a[0]  //pa points to the first int in the array a
 * 
 *      pa++; //pa now points to a[1]
 * 
 *      *pa == a[1] //true
 * 
 * It also works to do this:
 * 
 *      pa = a;  //This sets the pointer to the first element.  
 * 
 * We can use this, and the fact that strings are just arrays of characters to
 * do some cool stuff.  Like this strlen function.
 */

int strlen(char *);

int strlen(char *s){
    int n;
    //We increment the pointer to look at the next char in the array.
    for( n = 0; *s !='\0'; s++) n++;
    return n;
}

/*
 * We can also replace the parameter types in functions that take arrays as
 * a parameter.  You can just use a pointer to the type of the array, and
 * start with its first value.  They are equivalent.
 *
 *      int strlen(char *s) == int strlen(char s[])
 * 
 * Well, not totally, need to make sure your code doesnt assume the pointer?
 * 
 * Also:                
 *      strlen( s ) == strlen( &s[0] ) if you use the first form.
 */

int main(int argc, char** argv) {
    
    char word[100] = "HELLO";
    
    printf( "%s : %d", word, strlen(word) );
    
    return (EXIT_SUCCESS);
}

