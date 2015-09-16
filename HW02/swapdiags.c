#include <stdio.h>

void printMatrix(int s, int[][s]);
void reverseDiags(int s, int[][s]);

void main() {
    int neven = 4;
    int nodd = 5;
    int testEven[4][4] = {
        {1, 2, 3, 4},
        {2, 1, 4, 3},
        {2, 4, 1, 3},
        {4, 2, 3, 1}
    };
    int testOdd[5][5] = {
        {1, 2, 3, 4, 5},
        {2, 1, 3, 5, 4},
        {0, 2, 6, 4, 0},
        {2, 5, 3, 1, 4},
        {5, 2, 3, 4, 1}
    };

    printMatrix(neven, testEven);
    printf("Reversing\n");
    reverseDiags(neven, testEven);
    printMatrix(neven, testEven);

    printMatrix(nodd, testOdd);
    printf("Reversing\n");
    reverseDiags(nodd, testOdd);
    printMatrix(nodd, testOdd);
}

void printMatrix(int size, int in[][size]) {
    int i, j;
    for (i = 0; i < size; i++) {
        printf("{");
        for (j = 0; j < size; j++) {
            printf(" %d%c", in[i][j], (j < size - 1) ? ',' : ' ');
        }
        printf("}\n");
    }
}

void reverseDiags(int size, int in[][size]) {
    int i, j, temp;
    for (i = 0, j = size - 1; i < size; i++, j--) {
        //i is the current row AND the index of the first 
        //element to switch
        if (!(i == j)) {
            temp = in[i][i];
            in[i][i] = in[i][j];
            in[i][j] = temp;
        }
    }
}
