#include <stdio.h>
#include <stdlib.h>
#include "OperationsOnMatrixes.h"
int main()
{
    unsigned int m,n;
    float tmpCellValue;

        printf("Please state the number of rows of your matrix: ");
            scanf("%d",&m);
        printf("\nPlease state the number of columns of your matrix: ");
            scanf("%d",&n);

        float matrix[m][n];

        for(int i=0;i < m; i=i+1)
        {
            for(int j = 0;j < n;j=j+1)
            {
                printf("Please input the number in row number %d , column number %d \n",i+1,j+1);
                    scanf("%f",&tmpCellValue);
                    matrix[i][j] = tmpCellValue;
            }
        }
        BasicRowOperations(m,n,matrix);
    return 0;
}
