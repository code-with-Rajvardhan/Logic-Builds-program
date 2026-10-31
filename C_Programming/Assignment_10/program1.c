//=====================================================================
//  File Name   : Program1.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 1/11/2026
//  Batch       : LB (Assignment 10)
//---------------------------------------------------------------------
// 
//  
// Q.1) Write a program which accept radius of circle 
//      from user and calculate its area.
//      Consider value of PI as 3.14.
//      (Area = PI * Radius * Radius)              (1/11/2026)
//  
// 
//---------------------------------------------------------------------
//  Input  : 5.3
//  Output : 88.2026
//
//  Input  : 10.4
//  Output : 339.6224
//---------------------------------------------------------------------
//=====================================================================
#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    float PI = 3.14f;
    float area = 0.0f;

    area = PI * fRadius * fRadius;

    return area;
}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius:\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("area : %.4f",dRet);

   return EXIT_SUCCESS;
}