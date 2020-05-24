
```c
/* find_string C code */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void nfind(char* string, char* pat);
int main(void)
{
    char array1[50] = "ababbaababaaabaca";
    char array2[10] = "abac";

    nfind(array1, array2);

    return 0;
}
void nfind(char* string, char* pat)
{
    char* t;
    t = (char*)malloc(sizeof(char));
    if (t = strstr(string, pat))
        printf("The string from strstr is : %s\n", t);
    else
        printf("The pattern was not found with strstr\n");
}
