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
     Pattern(7);
    
     return EXIT_SUCCESS;
}