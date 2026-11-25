#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLen)
{
    int icnt = 0;

    for(icnt = 0; icnt < iLen; icnt++)
    {
        printf("%d\n",Arr[icnt]);
    }
    
}

int main()
{
   int Brr[5] = {11,21,51,101,111};


   Display(Brr,5);   // display(100,5);



    return EXIT_SUCCESS;
}