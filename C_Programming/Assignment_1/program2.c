//=====================================================================
//  File Name   : Program2.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 18/10/2026
//  Batch       : LB (Assignment 1)
//---------------------------------------------------------------------
// 
//  
// Q.2) program to print 5 times "marvellous" on screen ?         
// 
// 
//---------------------------------------------------------------------
//  Input  : 5
//  Output : Marvellous
//           Marvellous
//           Marvellous
//           Marvellous
//           Marvellous
//---------------------------------------------------------------------
//=====================================================================
#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int i = 0;
    for(i = 1; i<=5; i++)
    {
        printf("Marvellous \n");
    }
}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    
    Display();

    return EXIT_SUCCESS;
}