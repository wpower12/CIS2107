/* 
 * File:   sortingchars.c
 * Author: wpower
 *
 * Created on September 23, 2015, 10:14 AM
 */

#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 10000
/* <Sorting Chars and Pointers>
 * 
 * Knowing that char arrays and pointers to the first element are equivalent,
 * we can adapt the sorting algorithms for quicksort to sort arrays of pointers
 * to strings.
 * 
 * In this scenario, the data is sotred with poitners to pointers.  The array 
 * holds a line in each bucket.  These lines themselves are just pointers to
 * the first character in another array.
 * 
 * For this example, we'll concentrate on three main functions: 
 */

int readlines( char*, int );
void writelines( char*, int );


/*
 * 
 */
int readlines( char *lineptr[], int maxlines ){
    int len, nlines=0;
    char *p, line[MAXLEN];
    
    while( (len = getline(line, MAXLEN)) > 0 ){
        if( nlines >= maxlines || p = alloc(len) == NULL ){
            return -1;
        } else {
            line[len-1] = '\0';
            strcopy(p, line);
            lineptr[nlines++];
        }
    }
}

/*
 * Writes the nlines lines starting at lineptr.
 */
void writelines( char *lineptr, int nlines ){
    while(nlines-- > 0)
        printf( "%s\n", *lineptr++ );
}

int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

