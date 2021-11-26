#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct record
{
    char fio[32];
    char cat[32];
    char num[24];
    char inf[64];
};

#define row 3
struct record tab[row];


int main()
{
    for(int i= 0; i < row; i ++)
    {
        printf("[reord %d]\n", i);

        printf("fio: ");
        gets(tab[i].fio);
        
        printf("cat: ");
        gets(tab[i].cat);

        printf("num: ");
        gets(tab[i].num);

        printf("inf: ");
        gets(tab[i].inf);
    }

    printf("\n");
    for(int i = 0; i < row; i++)
    {
        printf("%s\t%s\t%s\t%s\n",tab[i].fio,tab[i].cat,tab[i].num,tab[i].inf);
    }

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


    printf("search: ");
    char cat[32];
    gets(cat);

    FILE *file;

    int g = 0;
    file = fopen("Exam13c.txt", "w");
    for(int i = 0; i < row;i++)
    {
        char *p = strtok(tab[i].cat, " ");
        if (strcmp(p, cat) == 0)
        {
            printf("%s\t%s\n",tab[i].fio, tab[i].num);
            g++;
            fprintf(file,"%s %s\n",tab[i].fio, tab[i].num);
        }
        
    }
    fclose(file);
    if (g < 1) printf("not found\n");

    return 0;
}
