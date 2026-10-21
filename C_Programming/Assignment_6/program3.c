//=====================================================================
//  File Name   : Program3.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 21/10/2026
//  Batch       : LB (Assignment 6)
//---------------------------------------------------------------------
// 
//  Calculate Shopping Discount
//  Problem Statement: Accept the total purchase amount and calculate the final payable amount after applying the following discount. 
//  Negative purchase amounts are invalid.Purchase AmountDiscountBelow ₹10000%₹1000 to below ₹500010%₹5000 and above20%
//  
//
//           
//---------------------------------------------------------------------
//    
//  Expected Output:Input: 800 → Payable Amount = 800.00Input: 2000 → Payable Amount = 1800.00Input: 6000 → Payable Amount = 4800.00
//    
//---------------------------------------------------------------------
//=====================================================================
#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalamount = 0.0f;

    if(fAmount <= 1000)
    {
        printf("Payable Amount = %f ",fAmount);
    }
    else if(fAmount > 1000 && fAmount <= 4999)
    {
        fDiscount = fAmount * 0.10;
        fFinalamount = fAmount - fDiscount;
      
        printf("Payable Amount is = %f ",fFinalamount);
    }
    else if(fAmount >= 5000)
    {
        fDiscount = fAmount * 0.20;
        fFinalamount = fAmount - fDiscount;
 
        printf("Payable Amount is = %f ",fFinalamount);
    }

}
//---------------------------------------------------------------------
//  Entry point function : main
//---------------------------------------------------------------------

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}