#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define max_txt 256

int main()
{
    FILE *f1 = fopen("F1e21-in.txt", "r");
    FILE *f2 = fopen("F1e21-out.txt", "w+");


    int i = 1;


    while(1)
    {
        char s[max_txt];
        if (fgets(s, max_txt, f1) == NULL)
        {
            fprintf(f2,"Количество строк: %d\n", i-1);
            break;
        } 
    

        char *c = strchr(s,'\n');
        if (c != NULL) *c = '\0';

        fprintf(f2,"%d %s\n", i,s);

        i++;
    }
   

    fclose(f1);
    fclose(f2);

    return 0;
}
