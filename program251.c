#include<stdio.h>
#include<stdlib.h>

int countspecex(char *str)
{
    int icount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            icount++;
        }
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


   iRet = countspecex(Arr);

   printf("speces frequency is : %d\n",iRet);

    return EXIT_SUCCESS;
}