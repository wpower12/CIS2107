#include <stdio.h>

#define LEN_A 10
#define MAXINT 99999
//Course methods
void print_array(int[], int);
double average(int[], int);
void insert(int[], int, int, int);
void rotate_left(int[], int, int);
void array_copy(int[], int[], int);
void initialize(int[], int, int);
void sort(int[], int);
int secondSmallest(int [], int length);

//Utility methods
void quicksort(int[], int, int);
int partition(int[], int, int);
void reverse(int[], int, int);

int main(int argc, char **argv) {
    int A[] = {-9, 13, 51, 95, -4, 35, 32, 12, 9, 364};
    int B[LEN_A + 1];
    int newValue = 945;

    printf("A[] is:\n");
    print_array(A, LEN_A);

    initialize(B, LEN_A + 1, 0);
    printf("B[] is:\n");
    print_array(B, LEN_A + 1);

    array_copy(B, A, LEN_A);
    printf("but now it's\n");
    print_array(B, LEN_A + 1);

    insert(B, newValue, 0, LEN_A);
    printf("and after inserting %d at the beginning it's\n", newValue);
    print_array(B, LEN_A + 1);

    printf("The average of B[] is %f\n", average(B, LEN_A));


    sort(A, LEN_A);
    print_array(A, LEN_A);

    rotate_left(A, LEN_A, 3);
    print_array(A, LEN_A);

    printf("The second smallest of B[] is %d\n", secondSmallest(B, LEN_A + 1));
    print_array(B, LEN_A + 1);

    return 0;
}

/* prints A[] inside parentheses with each value separated
   by commas to stdout (which will be the screen). */
void print_array(int A[], int length) {
    printf("(");
    int i = 0;
    while (i < length) {
        if (i < length - 1) {
            printf("%d, ", A[i]);
        } else {
            printf("%d)\n", A[i]);
        }
        i++;
    }
}

/* returns the average of the items in A[] or 0.0 if A is empty */
double average(int A[], int length) {
    double ret = 0.0;
    if (length > 0) {
        double sum = 0;
        int i = 0;
        while (i < length) {
            sum += (double) A[i];
            i++;
        }
        ret = sum / (double) length;
    }
    return ret;
}

/* Sort the values in A[].  For example, if before the function,
   A[] contained [3,2,1,5,4], after the function, A[] contains
   [1,2,3,4,5] */
void sort(int A[], int length) {
    quicksort(A, 0, length);
}

//Implemented psuedocode found on wikipedia entry.

void quicksort(int A[], int low, int high) {
    if (low < high) {
        int p;
        p = partition(A, low, high);
        quicksort(A, low, p);
        quicksort(A, p + 1, high);
    }
}

int partition(int A[], int low, int high) {
    int pivot = A[low];
    int i = low - 1;
    int j = high + 1;
    while (1 == 1) {
        j--;
        while (A[j] > pivot) {
            j--;
        }
        i++;
        while (A[i] < pivot) {
            i++;
        }
        if (i < j) {
            //Swap			
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        } else {
            return j;
        }
    }
}

/* returns the second smallest item in A[], assume length is >=2 */
int secondSmallest(int A[], int length) {
    int smallest = A[0];
    int second = MAXINT;
    int i;
    for (i = 0; i < length; i++) {
        if (A[i] < smallest) {
            second = smallest;
            smallest = A[i];
        } else if (A[i] < second) {
            second = A[i];
        }
    }
    return second;
}

/* rotates the values in the array numPlaces to the right */
/* for example, if A[] is initially 10,20,30,40,50, and numPlaces=3 */

/* after the function finishes, A[] would be 40,50,10,20,30 */
void rotate_left(int A[], int length, int numPlaces) {
    //Rotating with reverses
    //The psuedocode was for reversing right, but 
    //rev_left(i) = rev_right(n-i-1) so we can just 
    //tweak the input for the reverses.
    int by = length - numPlaces - 1;
    reverse(A, 0, length);
    reverse(A, 0, by);
    reverse(A, by, length);
}

void reverse(int A[], int lo, int hi) {
    int a = lo;
    int b = hi;
    int temp;
    while (--b > a) {
        temp = A[a];
        A[a] = A[b];
        A[b] = temp;
        ++a;
    }
}

/* inserts the value n in A[] at the given index and shifts
   all other values up one position.  A[] contains length items.

   It is up to the caller to make sure that there is enough space
   in A[] to accomodate the new item, and that the index is valid. */
void insert(int A[], int n, int index, int length) {
    int i;
    for (i = length - 1; i >= index; i--) {
        A[i + 1] = A[i];
    }
    A[index] = n;
}

/* copies the first numItems from S to D. */
void array_copy(int D[], int S[], int numItems) {
    int i;
    for (i = 0; i < numItems; i++) {
        D[i] = S[i];
    }

}

/* sets the first len elements of A to initialValue */
void initialize(int A[], int len, int initialValue) {
    int i;
    for (i = 0; i < len; i++) {
        A[i] = initialValue;
    }

}


