#include <math.h>
#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
int main()
{
    
    char* line = "GET /hello.php?name=Rutvij HTTP/1.1\r\n";
    char* abs_path = (char* )malloc(strlen(line) * sizeof(char));
    char* query = (char* )malloc(strlen(line) * sizeof(char));
    char* temp = (char* )malloc(strlen(line) * sizeof(char));
    temp = strstr(line, " ");
    char* method = (char* )malloc((temp - line) * sizeof(char));
    strncpy(method, line, (temp - line));
    method[temp - line] = '\0';
    //printf("%s\n", method);
    char* temp1 = (char* )malloc(strlen(line) * sizeof(char));
    temp1 = strstr((temp + 1), " ");
    char* request = (char* )malloc((temp1 - temp -1) * sizeof(char));
    strncpy(request, (temp + 1), (temp1 - temp -1));
    request[temp1 - temp -1] = '\0';
    //printf("%s\n", request);
    char* temp2 = (char* )malloc(strlen(line) * sizeof(char));
    temp2 = strstr((temp1 + 1), "\r\n");
    char* version = (char* )malloc((temp2 - temp1 -1) * sizeof(char));
    strncpy(version, (temp1 + 1), (temp2 - temp1 -1));
    version[temp2 - temp1 -1] = '\0';
    char* temp3 = (char* )malloc(strlen(line) * sizeof(char));
    temp3 = strstr(request, "?");
    if(temp3 == NULL)
    {
        strcpy(query, "");
        query[0] = '\0';
        strcpy(abs_path, request);
    }
    else
    {
        strcpy(query, (temp3 + 1));
        query[strlen(query)] = '\0';
        strncpy(abs_path, request, (temp3 - request));
    }
    printf("%s\n", query);
    printf("%s\n", abs_path);
}