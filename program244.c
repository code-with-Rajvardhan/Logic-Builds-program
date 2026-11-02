#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strlenX(char *str)
{
    int icount = 0;

    while(*str != '\0')
    {
        icount++;
        str++;
    }

    return icount; 
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("enter string : \n");
    scanf("%[^'\n']s",Arr);


   iRet = strlen(Arr);

   printf("string length is : %d\n",iRet);

    return EXIT_SUCCESS;
}