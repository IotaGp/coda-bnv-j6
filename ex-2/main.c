#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonction.h"
int main()
{
    char str1[] = "hello world !";
    char str2[] = "hello world !";

    int i = strcmp(str1, str2);
    printf("%d\n", i);

    exit(0);
}