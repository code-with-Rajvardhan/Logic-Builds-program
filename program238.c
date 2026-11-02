#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[20] = "Jay Ganesh";
    char *ptr = NULL;
    int icount = 0;

    ptr = &(Arr[0]);

    while(*ptr != '\0')
    {
        icount++;
        ptr++;
    }

    printf("Length of string is : %d\n",icount);


    return EXIT_SUCCESS;
}