#include<stdio.h>
#include<stdlib.h>

int countX(char *str)
{
    int icount = 0;

    while(*str != '\0')
    {
        if(*str == 'A')
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


   iRet = countX(Arr);

   printf("a frequency is : %d\n",iRet);

    return EXIT_SUCCESS;
}