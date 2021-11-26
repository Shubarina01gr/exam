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
    for(int i = 1; i < 5; i++)
    {
        printf("\tcol: %d", i+1);
    }
   
    printf("\n");
    

    for(int y = 0; y < rows; y++)
    {
        int t = 0, f = 0, fo = 0, fi =0;
        printf("%d", y + 1);
        for(int x = 0; x < cols; x++)
        {
            printf("\t%d", tab[y][x]);
            if(tab[y][x] == 2) t++;
            if(tab[y][x] == 3) f++;
            if(tab[y][x] == 4) fo++;
            if(tab[y][x] == 5) fi++;
        }
        printf("\t%.1f", avg[y]);
        printf("\t%d", t);
        printf("\t%d", f);
        printf("\t%d", fo);
        printf("\t%d", fi);

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
