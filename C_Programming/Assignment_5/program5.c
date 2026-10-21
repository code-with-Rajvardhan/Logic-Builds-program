//=====================================================================
//  File Name   : Program3.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 19/10/2026
//  Batch       : LB (Assignment 5)
//---------------------------------------------------------------------
// 
//  
//   Identify Character TypeProblem Statement: 
//   Accept a single character and determine whether it is an uppercase alphabet,
//   lowercase alphabet, digit, or special character. 
//   Use character comparisons without using library character-classification functions.
//  
//   
//
//           
//---------------------------------------------------------------------
//    
//   Expected Output:Input: A → Uppercase AlphabetInput: m → Lowercase AlphabetInput: 7 → DigitInput: @ → Special Character
//    
//---------------------------------------------------------------------
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

 void Cheakchartype(char cValue)
 {
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c its Uppercase Alphabet",cValue);
    }
   else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c its Lowercase Alphabet",cValue);
    }
   else if(cValue >= 0 || cValue <= 9)
    {
        printf("%c  it is Digit",cValue);
    }
    else
    {
        printf(" Special Character");
    }
 }
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    char cValue = '\0';

    printf("Enter Character :\n");
    scanf("%c",&cValue);

    Cheakchartype(cValue);

    return EXIT_SUCCESS;
}