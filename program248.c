#include<stdio.h>
#include<stdlib.h>

int countvowelsX(char *str)
{
    int icount = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
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


   iRet = countvowelsX(Arr);

   printf("vowels frequency is : %d\n",iRet);

    return EXIT_SUCCESS;
}