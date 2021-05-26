#ifndef OPERATIONSONMATRIXES_H_INCLUDED
#define OPERATIONSONMATRIXES_H_INCLUDED
#include <math.h>
void BasicRowOperations()
{
    int m,n,tmpQuestion;
    int tmpAction1,tmpAction3;
    float tmpMatrixValue,multiplication;
    int t = 1;
    int tmpAction2;

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
                    scanf("%f",&tmpMatrixValue);
                    matrix[i][j] = tmpMatrixValue;
            }
        }
    while(t > 0)
    {
        DisplayMatrix(m,n,matrix);
        printf("\nWhat would you like to do with your matrix?(Only row operations like this: row(input number) (1 for + and 2 for -) (x times)row(number) \n");
            printf("Row");
            scanf("%d",&tmpAction1);
            printf("+(1) or -(2) ");
            scanf("%d",&tmpAction2);
            printf("multiplied by: ");
            scanf("%f",&multiplication);
            printf(" Row");
            scanf("%d",&tmpAction3);
                if(tmpAction2 == 1)
                    {
                      for(int i = 0; i < n; i=i+1)
                        {
                            matrix[tmpAction1-1][i] = matrix[tmpAction1-1][i] + (multiplication*matrix[tmpAction3-1][i]);

                        }
                        printf("This is how your matrix look after Action: row%d + %.2frow%d\n",tmpAction1,multiplication,tmpAction3);
                        DisplayMatrix(m,n,matrix);
                    }

                if(tmpAction2 == 2)
                    {
                        for(int i = 0; i < n;i=i+1)
                        {
                            matrix[tmpAction1-1][i] = matrix[tmpAction1-1][i] - (multiplication*matrix[tmpAction3-1][i]);

                        }
                        printf("This is how your matrix look after Action: row%d - %.2frow%d\n",tmpAction1,multiplication,tmpAction3);
                        DisplayMatrix(m,n,matrix);
                    }


        printf("If you would like to end click 0, otherwise click 1: ");
            scanf("%d",&tmpQuestion);
        t = tmpQuestion;
    }

}

void DisplayMatrix(int x,int y,float arr[x][y])
{
    printf("+");
        for(int i = 0;i <= (y*7);i+=1)
        {
            printf("=");
        }
    printf("+\n");
    for(int i=0;i < x; i=i+1)
        {

            for(int j = 0;j < y;j=j+1)
            {

                printf(" |%4.2f| ",arr[i][j]);

            }
            printf("\n");

        }
    printf("+");
        for(int i = 0;i <= (y*7);i+=1)
        {
            printf("=");
        }
    printf("+\n");
}

#endif // OPERATIONSONMATRIXES_H_INCLUDED
