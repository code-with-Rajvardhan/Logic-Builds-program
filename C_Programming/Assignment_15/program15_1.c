//=====================================================================
//  File Name   : Program1.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 04/11/2026
//  Batch       : LB (Assignment 15)
//---------------------------------------------------------------------
// 
//  
// Q.1) Write a program which accept name from user and print that 
//      name.                                            
//  
// 
//---------------------------------------------------------------------
//  Input  : Piyush Khairnar
//  Output : Piyush Khairnar
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];

    printf("Enter full name : \n");
    scanf("%[^\n]s",Name);

    printf("%s",Name);

    return EXIT_SUCCESS;
}