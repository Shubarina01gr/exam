#include <stdlib.h>
#include <stdio.h>

int main()
{
    #define n_max 10
    #define m_max 10

    #define vmin 10
    #define vmax 20

    int n, m;
    printf("n (cols), m (rows): ");
    scanf("%d %d", &n, &m);

    if(n < 0 || n >= n_max || m < 0 || m >= m_max)
    {
        puts("error");
       // return 0;
    }
    else
    {
        int a[m_max][n_max]; 
        int b[m_max][n_max]; 

        int c1[m_max][n_max]; 
        int c2[m_max][n_max];

         for(int y = 0; y < m; y++)
            for(int x = 0; x < n; x++ )
            {
                a[y][x] = vmin + rand() % (vmax - vmin + 1);
                b[y][x] = vmin + rand() % (vmax - vmin + 1);
            }
 

        for(int y = 0; y < m; y++)
            for(int x = 0; x < n; x++ )
            {
                c1[y][x] = a[y][x] + b[y][x];
                c2[y][x] = a[y][x] - b[y][x];
            }

        
        for(int i = 0; i < n * 4 / 2; i++) putchar(' ');
        printf("a");
        for(int i = 0; i < n * 4 / 2; i++) putchar(' ');
        printf("\t");
        for(int i = 0; i < n * 4 / 2; i++) putchar(' ');
        printf("b\n");


        for(int y = 0; y < m; y++)
        {
            for(int x = 0; x < n; x++)
                printf("% 4d", a[y][x]);

            printf("\t");

            for(int x = 0; x < n; x++)
            {
                printf("% 4d", b[y][x]);
               // if(x < n - 1) printf("\t");
            }
            printf("\n");
        }
        

          for(int i = 0; i < n * 4 / 2; i++) putchar(' ');
        printf("c");
        for(int i = 0; i < n * 4 / 2; i++) putchar(' ');
        printf("\t");
        for(int i = 0; i < n * 4 / 2; i++) putchar(' ');
        printf("d\n");


         for(int y = 0; y < m; y++)
        {
            for(int x = 0; x < n; x++)
                printf("% 4d", c1[y][x]);

            printf("\t");

            for(int x = 0; x < n; x++)
            {
                printf("% 4d", c2[y][x]);
              //  if(x < n - 1) printf("\t");
            }
            printf("\n");
        }

    }



    return 0;
}
