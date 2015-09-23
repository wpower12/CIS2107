/* 
 * File:   pointers.c
 * Author: wpower
 *
 * Created on September 16, 2015, 10:21 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * <POINTERS!!!!!>
 * 
 * A pointer is a variable that contains the address of a variable.
 * Essentially a special int.  The compiler knows the int references
 * a addressed location in memory.  The pointer is basically the address.  
 * 
 * A pointer type is defined with a *
 * This tells the compiler that the variable is a pointer to the type 
 * it was instantiated with.
 *  ex:
 *         int *ip
 * 
 * This declares ip as a pointer to type int.
 * 
 * The * also follows the pointer to its value. So:
 * 
 *        y = *ip
 * 
 * Sets the value of y to whatever value the pointer ip is pointing to.
 * 
 * The * is a unary operater, the <dereference operator>.  It is an operator that
 * follows a pointer and returns the typed value.  So above, we were using it to say that when we 
 * dereference p, we find an int.  Also, after dereferencing, we use
 * the value to set a variable y of type int.  
 * 
 * To get an <address of a variable> for a pointer to point to, we use
 * the & operator.  This returns the address of the following variable
 * 
 *       ip = &x
 * 
 * This makes the pointer equal to the address of x.  Note that since ip is
 * already of the pointer type, it has no special syntax.  We give it a value
 * from a method that gives us addresses.  Thats what & does, returns pointer addresses
 *
 * <Precedence rules> - * is lower precedence than many operators.  So be sure to
 * avoid situations like
 * 
 *     *ip++  -- will increment the pointer before dereferecning
 *     (*ip)++ -- will dereference the pointer then increment that value.
 */
int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

