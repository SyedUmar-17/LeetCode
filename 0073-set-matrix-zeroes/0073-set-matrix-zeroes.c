#include <stdlib.h>

void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {

    int rows = matrixSize;
    int cols = matrixColSize[0];

    int *row = (int *)calloc(rows, sizeof(int));
    int *col = (int *)calloc(cols, sizeof(int));

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(row[i] || col[j])
            {
                matrix[i][j] = 0;
            }
        }
    }

    free(row);
    free(col);
}