//=====================================================================
//  File Name   : Program5.c
//  Author Name : Rajvardhan jalandar ghorpade
//  Date        : 21/10/2026
//  Batch       : LB (Assignment 6)
//---------------------------------------------------------------------
// 
//    Calculate Employee BonusProblem Statement: 
//    Accept an employee's monthly salary and completed years of service. 
//    Calculate the bonus using these rules:
//    more than 10 years of service earns a bonus of 15% of monthly salary; 5 to 10 years earns 10%; less than 5 years earns 5%. 
//    Salary must be positive and years of service cannot be negative.
//   
//           
//---------------------------------------------------------------------
//    
// Expected Output:Input: 30000 12 → Bonus = 4500.00Input: 20000 7 → Bonus = 2000.00Input: 10000 2 → Bonus = 500.00
//    
//---------------------------------------------------------------------
//=====================================================================
// Calculate Employee Bonus

#include<stdio.h>
#include<stdlib.h>

void CalculteBonus(float fsalary, int iyear)
{
    float fbonus = 0.0f;

    if(fsalary <= 0 || iyear <= 0)
    {
        printf("Invalid input\n");
       
    }
    else if(iyear > 10)
    {
        fbonus = fsalary * 0.15;
        printf("Bonus is : %f",fbonus);
    }
    else if(iyear >= 5 && iyear <= 10 )
    {
        fbonus = fsalary * 0.1;
        printf("Bonus is : %f",fbonus);
    }
    else
    {
        fbonus = fsalary * 0.05;
        printf("Bonus is : %f",fbonus);
    }
}

int main()
{
    float fsalary = 0.0f;
    int iyear = 0;

    printf("Enter salary and years of service : \n");
    scanf("%f %d",&fsalary,&iyear);

    CalculteBonus(fsalary, iyear);

    return EXIT_SUCCESS;
}