#include<stdio.h>
#include<stdlib.h>

void Display(char *str) //
{
    printf("%s\n",str);
}

int main()
{
    char Arr[100];

    printf("Enter your string :\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);  // call by address


    return EXIT_SUCCESS;
}