#include<stdio.h>
#include<stdlib.h>

void CheakDivisiable(int iNo)
{
  
   if(iNo % 5 ==0)
   {
    printf("its divisiable\n");
   }
  else
   {
    printf("its  non divisiable\n");
   }
  
   
}
int main()
{
    int iValue = 0;

    printf("Enter your number :\n");
    scanf("%d",&iValue);

    CheakDivisiable(iValue);


    return EXIT_SUCCESS;
}