#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct record
{
    int acc;
    char fio[32];
    float sum;
    int prc;

    float res;
};

#define row 3
struct record tab[row];


int main()
{
    char tmp[32];
    for(int i= 0; i < row; i ++)
    {
        printf("[reord %d]\n", i);

        printf("acc: ");
        gets(tmp);
        tab[i].acc = atoi(tmp);
        
        printf("fio: ");
        gets(tab[i].fio);

        printf("sum: ");
        gets(tmp);
        tab[i].sum = atof(tmp);

        printf("prc: ");
        gets(tmp);
        tab[i].prc = atof(tmp);
    }

    for(int i = 0; i < row; i++)
        tab[i].res = tab[i].sum + (tab[i].sum * tab[i].prc / 100.0f) / 12.0f;

    printf("\n");
    for(int i = 0; i < row; i++)
    {
        printf("%d\t%s\t%.2f\t%d\t%.2f\n",tab[i].acc,tab[i].fio,tab[i].sum,tab[i].prc,tab[i].res);
    }

 /*
    printf("search: ");
    char fio[32];
    gets(fio);
    int n = 0;
    for(int i = 0; i < row;i++)
    {
        char *p = strtok(tab[i].fio, " ");
        if (strcmp(p, fio) == 0)
        {
            printf("%s\n",tab[i].num);
            printf("%s\n",tab[i].inf);
            n++;
        }
        
    }
    if (n < 1) printf("not found\n");
    */
    return 0;
}
