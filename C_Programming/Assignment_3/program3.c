//=====================================================================
//  File Name   : Program3.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 19/10/2026
//  Batch       : LB (Assignment 3)
//---------------------------------------------------------------------
// 
//  
// Q.3) write a program which accept one no from user and print even factors of that no. 
//  
// 
//---------------------------------------------------------------------
//  Input  : 36
//  Output : 1 2 4 6 12 18 36
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)
    {
       if((iNo % i)== 0 && (i % 2) == 0) 
       {
        printf("%d\t",i);
       }
    }
    
}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue = 0;
     
    printf("Enter number\n");
    scanf("%d",&iValue);


    DisplayFactor(iValue);


    return EXIT_SUCCESS;
}