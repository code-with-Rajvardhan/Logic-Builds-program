// @ # $ %
#include<stdio.h>
#include<stdlib.h>

int countSpecialX(char *str)
{
    int icount = 0;

    while(*str != '\0')
    {
       if((*str == '@') || (*str == '#') || (*str == '*') || (*str == '%') || (*str == '&'))
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


   iRet = countSpecialX(Arr);

   printf(" frequency of special char : %d\n",iRet);

    return EXIT_SUCCESS;
}