#include<stdio.h>
#include<stdlib.h>

#define n 31
int pressure[n];

#define pmin 740
#define pmax 780
#define pnorm 760

int z = 0;
void menu(int *pressure, int day)
{
   for(int i = 0; i < n; i++)
   {
      if(i == day-1)
        { 
            pressure[i] = -1;
            z++;
        }  
    }
}

int main()
{
    printf("arr: ");
    for(int i = 0; i < 31; i++)
    {
        pressure[i] = 740 + rand() % (780 - 740 + 1);
        printf("%d ", pressure[i]);
    }
    printf("\n");

    int below = 0;
    int exact = 0;
    int above = 0;

    int choice = -1;
    int day;


/////////////////////////////   
    do
    {
        printf("Удалить какие-либо результаты?\n");
        printf("1 - да\n");
        printf("2 - нет\n");
        printf("choice: ");
        scanf("%d", &choice);

       
        switch(choice)
        {
            case 1: printf("Введите дату: "); scanf("%d", &day); menu(pressure,day); break;
        }
      
        puts("\n");
    }
    while (choice != 2);
///////////////////////////////////////////////////////////

    for(int i=0; i < n; i++)
    {
        if(pressure[i] < pnorm && pressure[i] != -1) below ++;
        if(pressure[i] == pnorm) exact ++;
        if(pressure[i] > pnorm) above ++;
    }

    printf("below: %d\n", below);
    printf("exact: %d\n", exact);
    printf("pmax: %d\n", above);
   // printf("%d\n",z);
    return 0;

}
