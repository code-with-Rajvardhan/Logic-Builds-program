//=====================================================================
//  File Name   : Program5.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 19/10/2026
//  Batch       : LB (Assignment 3)
//---------------------------------------------------------------------
// 
//  
// Q.5) Accept the one character from user and cheak that char is vowel or not 
//  
// 
//---------------------------------------------------------------------
//  Input  : a       b 
//  Output : true    false
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int BOOl;
#define true 1
#define false 0

bool chkvowel(char cValue)
{
    if(cValue == 'a' ||  cValue == 'e'|| cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    char cValue = '\0';
    BOOl bRet = false;

    printf("Enter character :\n");
    scanf("%c",&cValue);

    bRet = chkvowel(cValue);
    
    if(bRet == true)
    {
        printf("its  vowel\n");
    }
    else
    {
        printf("its not vowel\n");
    }


    return EXIT_SUCCESS;
}