/*
---------------------------------------------------------------------
operation ||
---------------------------------------------------------------------
result1   result 2             final result
---------------------------------------------------------------------
true         true               true      sc - short circuit
true         false              true      sc - short circuit
false       true               true
false        false              false
---------------------------------------------------------------------

*/

#include<stdio.h>
#include<stdlib.h>

void CheakDivisiable(int iNo)
{
  
   if(((iNo % 3) == 0) || ((iNo % 5 )== 0))
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