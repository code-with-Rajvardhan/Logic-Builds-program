//=====================================================================
//  File Name   : Program1.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 31/10/2026
//  Batch       : LB (Assignment 9)
//---------------------------------------------------------------------
// 
//  
// Q.1) Write a program which accept number from user 
//      and display below pattern.                  (31/10/2026)
//  
// 
//---------------------------------------------------------------------
//  Input  : 5
//  Output : *  *  *  *  *  #  #  #  #  #
//
//  Input  : 6
//  Output : *  *  *  *  *  *  #  #  #  #  #  #
//
//  Input  : -5
//  Output : *  *  *  *  *  #  #  #  #  #
//
//  Input  : 2
//  Output : *  *  #  #
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
     int icnt = 0;

     for(icnt = 1; icnt <= iNo; icnt++)
     {
        printf("*\t#\t");
     }
      for(icnt = 1; icnt <= iNo; icnt++)
     {
        printf("#\t");
     }
    
}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

   return EXIT_SUCCESS;
}