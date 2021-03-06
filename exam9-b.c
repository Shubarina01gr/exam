#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *My;
    My = fopen("MyNine.txt", "r");

    #define days 31
    float coeff[days];

   for (int i = 0; i < days; i++)
   {
     fscanf(My,"%f", &coeff[i]);
   }
        
    float cmax=0;
    float cmin=10000000;

    for (int i = 0; i < days; i++)
    {
        printf("% 6.2f", coeff[i]);
        if(i % 7 == 6) printf("\n");

        if(coeff[i] < cmin) cmin = coeff[i];
        if(coeff[i] > cmax) cmax = coeff[i];
    }
    if (days != 28) printf("\n");

   
    #define set_blue printf("\033[1;34m")
    #define set_yellow printf("\033[1;33m")
    #define set_default printf("\033[0m")


    printf("Минимальное значение долара = "); set_blue; printf("%.2f\n", cmin); set_default;
    printf("Максимальное значение долар = "); set_yellow; printf("%.2f\n", cmax); set_default;

    return 0;

}
