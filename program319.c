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
   int Brr[7] = {11,21,51,101,111,121,151};


   Display(Brr,7);   // display(100, 7);



    return EXIT_SUCCESS;
}