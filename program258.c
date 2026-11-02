#include<stdio.h>
#include<stdlib.h>

int countcapitalX(char *str)
{
    int icount = 0;

    while(*str != '\0')
    {
       if((*str >= 'A') && (*str <= 'Z'))
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


   iRet = countcapitalX(Arr);

   printf(" frequency of capital letters: %d\n",iRet);

    return EXIT_SUCCESS;
}