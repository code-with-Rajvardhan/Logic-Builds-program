#include<stdio.h>
#include<stdlib.h>
void Pattern(int iNo)
{
     int icnt = 0;
     for(icnt = 1 ; icnt<=iNo ; icnt++)
     {
        printf("*\t");
     }

     printf("\n");
     
}
int main()
{
    int iValue = 0;

    printf("Enter the frequency :\n");
    scanf("%d",&iValue);

     Pattern(iValue);
    
     return EXIT_SUCCESS;
}