/* 
 * File:   quicksort.c
 * Author: wpower
 *
 * Created on September 16, 2015, 9:58 AM
 */

#include <stdio.h>
#include <stdlib.h>

void quicksort(int[], int, int);
int partition(int[], int, int);
void print_array(int[], int);

/*
 * 
 */
int main(int argc, char** argv) {
    int A[] = {-9, 13, 51, 95, -4, 35, 32, 12, 9, 364};
    int len = 9;
    
    print_array( A, len );
    quicksort( A, 0, len );
    print_array( A, len );
    
    return (EXIT_SUCCESS);
}

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