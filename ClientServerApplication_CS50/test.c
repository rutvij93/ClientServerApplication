#include <stdio.h>
#include <string.h>
#include <strings.h>
int main () 
{
    char* path = "/hello/world/rutvij.html";
    char* temp = strstr(path,".html");
    /*if(temp != NULL)
    {
        const char* MIME = "text/html";
        printf("%c",*temp);
        printf("%c",*(temp+1));
        printf("%c",*(temp+2));
        printf("%c\n",*(temp+3));
        printf("%c",*MIME);
    }*/
    if((strcasecmp( ( temp+1), "html")) == 0)
    {
        printf("%c",*(temp+1));
        printf("%c",*(temp+2));
        printf("%c",*(temp+3));
        printf("%c\n",*(temp+4));
    }
    printf("%s\n", temp);
}