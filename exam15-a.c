#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct record
{
    char os[32];
    int virt;
    int phy;
    int price;
};

#define row 3
struct record tab[row];


int main()
{
    char tmp[32];
    for(int i= 0; i < row; i ++)
    {
        printf("[reord %d]\n", i);
        scanf("%s %d %d %d", tab[i].os, &tab[i].virt, &tab[i].phy, &tab[i].price);
    }

    printf("\n");
    for(int i = 0; i < row; i++)
    {
        printf("%s\t%d\t%d\t%d\n",tab[i].os,tab[i].virt,tab[i].phy,tab[i].price);
    }

 
    printf("search: ");
    char os[32];
    scanf("%s",os);

    int n = 0;
    for(int i = 0; i < row;i++)
    {
        if (strcmp(tab[i].os, os) == 0)
        {
            printf("Virt: %d\n",tab[i].virt);
            printf("Phy: %d\n",tab[i].phy);
            n++;
        }
        
    }
    if (n < 1) printf("not found\n");
    
    return 0;
}
