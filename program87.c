#include<stdio.h>
#include<stdlib.h>

void CheakDivisiable(int iNo)
{
  
   if((iNo % 3) == 0)
    {
       
        if ( (iNo % 5 )== 0)
        {
            printf("its  divisiable\n");
        }
         else
        {
            printf("its non divisible");
        }
    }
    else
    {
        printf("its non divisible");
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