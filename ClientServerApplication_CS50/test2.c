#include <math.h>
#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
int main()
{
    FILE *file;
    char* temp = (char* )malloc(sizeof(char));
    char* temp1 = (char* )malloc(sizeof(char));
    long int x = 0;
    file = fopen("cat.jpg","rb");
    if (!file)
        return 1;
    while(!(feof(file)))
    {
        *temp1 = getc(file);
        if(feof(file))
            continue;
        *(temp + x) = *temp1; 
        x = x + 1;
        temp = realloc(temp, x + 1);
    }
    fclose(file);
    printf("%lu\n", strlen(temp));
    printf("%s\n", temp);
}