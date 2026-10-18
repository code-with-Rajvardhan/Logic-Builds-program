/*
---------------------------------------------------------------------
operation &&
---------------------------------------------------------------------
result1   result 2             final result
---------------------------------------------------------------------
true         true               true
true         false              false
faalse       true               false   sc - short circuit
false        false              false   sc - short circuit
---------------------------------------------------------------------

*/

#include<stdio.h>
#include<stdlib.h>

void CheakDivisiable(int iNo)
{
  
   if(((iNo % 3) == 0) && ((iNo % 5 )== 0))
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