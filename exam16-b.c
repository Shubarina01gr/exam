#include <stdio.h>

struct record
{
    char drag_name[64];
    char indications[64];
    int exp_years;
    int mfg_years;
};

#define n 3
struct record row[n];

int main()
{
    for(int i = 0; i < n; i++)
    {
        scanf("%s %s %d %d", row[i].drag_name, row[i].indications, &row[i].exp_years, &row[i].mfg_years);
    }
    
    printf("name\tindics\texp\tyear\n");

    for(int i = 0; i < n; i++)
    {
        printf("%s\t%s\t%d\t%d\n", row[i].drag_name, row[i].indications, row[i].exp_years, row[i].mfg_years);
    }

    FILE *abc = fopen("16Text","w+");
    for(int i = 0; i < n; i++)
    {
        fprintf(abc, "%s\t%s\t%d\t%d\n", row[i].drag_name, row[i].indications, row[i].exp_years, row[i].mfg_years);
    }
    fclose(abc);

 return 0;
}
