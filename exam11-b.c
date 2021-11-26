#include <stdlib.h>
#include <stdio.h>

int main()
{
  #define rows 25
    #define cols 5
    int tab[rows][cols];

    #define mark0 2
    #define mark1 5

    for(int y = 0; y < rows; y++)
        for (int x = 0; x < cols; x++)
            tab[y][x] = mark0 + rand() % (mark1 - mark0 + 1);

    float avg[rows];

    for(int y = 0; y < rows; y++)
    {
        int s = 0;
        avg[y] = 0.0f;
        for(int x = 0; x < cols; x++)
            s += tab[y][x];
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
            printf("\t%d", tab[y][x]);
        }
        printf("\t%.1f", avg[y]);
        printf("\n");
    }        

    float min = avg[0];
    int z;
    for(int y = 0; y < rows; y++)
    {
        if(min > avg[y])
        {
            min = avg[y];
            z = y+1;
        }
        
    }
    printf("У предмета %d самый низкий avg: %.1f\n",z, min);
    


    return 0;
}
