//=====================================================================
//  File Name   : Program3.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 18/10/2026
//  Batch       : LB (Assignment 2)
//---------------------------------------------------------------------
// 
//  
// Q.4) Accept one number from your if  number is less than 10 then print 'Hello' otherwise print 'Demo'    
//  
// 
//---------------------------------------------------------------------
//  Input  : 5      /     11
//  Output : Hello  /     Demo
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue = 0;

    printf("Enter your number\n");
    scanf("%d",&iValue);

    Display(iValue);



    return EXIT_SUCCESS;
}