#include<stdio.h>
#include<stdlib.h>
int main()
{
   float Arr[4] = {0.0f};
   int icnt = 0;
   

   printf("enter the elements of array:\n");

    for(icnt = 0; icnt < 4;  icnt++)
    {
        scanf("%f",&Arr[icnt]);
    }
  

   printf("elements of the array are :\n");

     for(icnt = 0; icnt < 4; icnt++)
    {
        printf("%f\n",Arr[icnt]);
    }


    return EXIT_SUCCESS;
}