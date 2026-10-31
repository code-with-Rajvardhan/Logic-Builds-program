//=====================================================================
//  File Name   : Program2.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 01/11/2026
//  Batch       : LB (Assignment 10)
//---------------------------------------------------------------------
// 
//  
// Q.2) Write a program which accept width & height of 
//      rectangle from user and calculate its area.
//      (Area = Width * Height)                    (01/11/2026)
//  
// 
//---------------------------------------------------------------------
//  Input  : 5.3  9.78
//  Output : 51.834
//---------------------------------------------------------------------
//===================================================================

#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth,float fHeight)
{
    float area = 0.0f;

    area = fWidth * fHeight;

    return area;
}

//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width :\n");
    scanf("%f", &fValue1);

    printf("Enter height :\n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("area is : %f",dRet);

   return EXIT_SUCCESS;
   
}