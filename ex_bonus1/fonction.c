#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap_ptr(int *ptr1, int *ptr2)
{
    int adptr1 = *ptr1;
    int adptr2 = *ptr2;
    *ptr1 = adptr2;
    *ptr2 = adptr1;
}