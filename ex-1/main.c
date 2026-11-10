#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *str[] = {"cou", "tête"}; 
    for (int i = 0; i < 2; i++)
    {
        printf("Longueur du mot %s : %zu\n",
               str[i], strlen(str[i]));
    }
    exit(0);
}