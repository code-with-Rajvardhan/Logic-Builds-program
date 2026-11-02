#include<stdio.h>
#include<stdlib.h>

int countdigitX(char *str)
{
    int icount = 0;

    while(*str != '\0')
    {
       if((*str >= '0') && (*str <= '9'))
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


   iRet = countdigitX(Arr);

   printf(" frequency of digits : %d\n",iRet);

    return EXIT_SUCCESS;
}