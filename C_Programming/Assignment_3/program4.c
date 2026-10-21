//=====================================================================
//  File Name   : Program4.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 19/10/2026
//  Batch       : LB (Assignment 3)
//---------------------------------------------------------------------
// 
//  
// Q.4) Accept the one character from user and print case of the character. 
//  
// 
//---------------------------------------------------------------------
//  Input  : a  b
//  Output : A  B
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - 32;

        printf("%c",cValue);
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {

        printf("%c",cValue);
    }
    
}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    char cValue = '\0';

    printf("Enter character \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}