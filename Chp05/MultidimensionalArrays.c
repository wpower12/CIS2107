/* 
 * File:   MultidimensionalArrays.c
 * Author: wpower
 *
 * Created on September 23, 2015, 10:23 AM
 */

#include <stdio.h>
#include <stdlib.h>

/* <MultiDim Arrays>
 * We see now that you can have multidimensional arrays in c.  The notation for
 * a given type, say int, is:
 * 
 * char[a][b] = { {}, {}, {}, ..., {} }
 * 
 * A good example is calculating the day of the year for a year, month, day
 */

static char daytab = {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},    //Leap year
    {0,31,29,31,30,31,30,31,31,30,31,30,31}     //Regular
};

int day_of_year( int year, int month, int day ){
    int i, leap;
    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;   //Calculate if in leap year
    for( i=1; i < month; i++ )
        day+= daytab[leap][i];  //We use the multidim array to handle leap years
                                //We already have the # of days in that variable
    return day;     //So return it!
}

/* <Pointers vs MD Arrays>
 * 
 * It ends up being better to use pointers for MD arrays because we are not locked
 * into defining a size for the second dimension. 
 * 
 * If we know we want to store some number of arrays sized n, we can do
 * 
 * int *arr[n];  
 * 
 * Now we can just increment the pointer and add values.  Who cares!
 * 
 * Again, since pointers and arrays are basically the same thing, we can also do
 * 
 * int arr[n][];
 * 
 * But this isnt the only benefit.  Pointers help us have variable sizes in 
 * char arrays.  This implicit sizing is shown when we create a 'string' 
 * with a char pointer
 * 
 * char *names[] = { "Bad", "Jan", "March" };
 * 
 * The second dimension would represent the number of names in the array.  But 
 * since those are chars, they are really just pointers to their first char.
 * This basically lets us have w.e size we need in each dimension.
 *
 */

int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

