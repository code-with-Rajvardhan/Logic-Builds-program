#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[100];

    printf("Enter string : \n");
   // scanf("%[^'\n']s",Arr);    // stoping till gets \n

   fgets(Arr,sizeof(Arr),stdin);     // its same as special scanf

    printf("Entered string is :%s\n",Arr);

    return EXIT_SUCCESS;
}