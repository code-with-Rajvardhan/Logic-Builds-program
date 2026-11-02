#include<stdio.h>
#include<stdlib.h>

int countsmallX(char *str)
{
    int icount = 0;

    while(*str != '\0')
    {
       if((*str >= 'a') && (*str <= 'z'))
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


   iRet = countsmallX(Arr);

   printf(" frequency of small letters: %d\n",iRet);

    return EXIT_SUCCESS;
}