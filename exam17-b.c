#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[256];
    fgets(s,256,stdin);

    char *p = strchr(s, '\n');

    if (p != NULL) p[0] = '\0';


    size_t n = strlen(s);
    printf("len: %ld\n", n);

    int m = 0;

    for(int i = 0; i < n; i++)
    if(s[i] == ' ') m++;


    for(int i = 0; i < n; i++)
    {
        if(i > 0)  
        {
          s[0] = toupper(s[0]);
        }
        
        if(s[i] == ' ') 
        {
            s[i+1] = toupper(s[i+1]);
            
        }
    }
 
    
    if(n>0)m++;
    printf("words: %d\n",m);
    printf("Line: %s\n",s);



    return 0;
}
