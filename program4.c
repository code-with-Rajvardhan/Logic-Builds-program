/*  
    step 1 : Understand the problem statement
    step 2 : Write the algorithm
    step 3 : decide the language
    step 4 : write the program
    step 5 : test the program
    
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// step 1: Understand the problem statement
//         user is going to enter any 2 integers 
//         and we have to program addition            
//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// step 2 : Write the algorithm
//   
/* 
     start 
            Accept 1st number as no1 
            Accept 2nd number as no2
            Create the variable as to store the result
            perform the addition and store into ans
            display the rsult ffrom ans
*/
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//   step 3: decide the language
//   we select the programming language 
//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  step 4 : write the program
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int main()
{
    int iValue1, iValue2, iResult;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;  // bubsiness logic

    printf("%d\n",iResult);


    return 0;
}