#include<stdio.h>
#include<stdlib.h>

void Display(char *str) //
{
    printf("%s\n",str);
}

int main()
{
    char Arr[] = "Ganesh";

    Display(Arr);  // call by address


    return EXIT_SUCCESS;
}