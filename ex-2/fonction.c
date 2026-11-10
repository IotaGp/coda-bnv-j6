#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int str_cmp = (char *str1, char *str2)
{
    int i = 0;
    while(str1[i] != \0)
    {
        if(str1[i] != str2[i])
        {
            return 0;
        }
        i = i + 1;
    }
    if(str1[i] == str2[i])
    {
        return i;
    }
}