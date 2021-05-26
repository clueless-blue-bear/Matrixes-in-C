#ifndef OPERATIONSONarrES_H_INCLUDED
#define OPERATIONSONarrES_H_INCLUDED
#include <math.h>
#include <string.h>
void BasicRowOperations(int h,int w,float arr[h][w]) // h(height) is the number of rows and w(width) is the number of columns
{
    int tmpQuestion;
    int tmpAction1,tmpAction3;
    float tmparrValue,multiplication;
    int t = 1;
    char tmpAction2[1];

    while(t > 0)
    {
        Displayarr(w,h,arr);
        printf("\nWhat would you like to do with your arr?(Only row operations like this: row(input number) then after enter (+ or  -) (x times)row(number) \n");
            printf("Row");
            scanf("%d",&tmpAction1);
            scanf("%s",&tmpAction2);
            printf("Row");
            scanf("%d",&tmpAction3);
            printf("multiplied by: ");
            scanf("%f",&multiplication);


                if(strcmp(tmpAction2,"+") == 0)
                    {
                      for(int i = 0; i < w; i=i+1)
                        {
                            arr[tmpAction1-1][i] = arr[tmpAction1-1][i] + (multiplication*arr[tmpAction3-1][i]);

                        }
                        printf("This is how your arr look after Action: row%d + %.2frow%d\n",tmpAction1,multiplication,tmpAction3);
                        Displayarr(h,w,arr);
                    }

                if(strcmp(tmpAction2,"-") == 0)
                    {
                        for(int i = 0; i < w;i=i+1)
                        {
                            arr[tmpAction1-1][i] = arr[tmpAction1-1][i] - (multiplication*arr[tmpAction3-1][i]);

                        }
                        printf("This is how your arr look after Action: row%d - %.2frow%d\n",tmpAction1,multiplication,tmpAction3);
                        Displayarr(h,w,arr);
                    }


        printf("If you would like to end click 0, otherwise click anything else: ");
            scanf("%d",&tmpQuestion);
        t = tmpQuestion;
    }

}

void Displayarr(int x,int y,float arr[x][y]) // x is the number of rows and y is the number of columns
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

#endif // OPERATIONSONarrES_H_INCLUDED
