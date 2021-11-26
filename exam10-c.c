#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

int main()
{
    #define rows 10
    #define cols 5
    int *a;

    a = (int*)malloc(rows*cols * sizeof(int));

    #define mark0 1
    #define mark1 10

    for(int y = 0; y < rows; y++)
        for (int x = 0; x < cols; x++)
            a[y] = mark0 + rand() % (mark1 - mark0 + 1);

    float avg[rows];

    for(int y = 0; y < rows; y++)
    {
        int s = 0;
        avg[y] = 0.0f;
        for(int x = 0; x < cols; x++)
            s += a[y];
        avg[y] = s / (float) cols;
    }

    printf("num");
    for(int x = 0; x < cols; x++)
    {
        printf("\t%d", x + 1);
        
    }
    printf("\tavg");
    printf("\n");

    for(int y = 0; y < rows; y++)
    {
        printf("%d", y + 1);
        for(int x = 0; x < cols; x++)
        {
            printf("\t%d", a[y]);
        }
        printf("\t%.1f", avg[y]);
        printf("\n");
    }  

    float max = 0;
    int z;
    for(int y = 0; y < rows; y++)
    {
        if(max < avg[y])
        {
            max = avg[y];
            z = y+1;
        }
        
    }
    printf("У номера %d самый высокий avg: %.1f\n",z, max);
   







    return 0;
}
