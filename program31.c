#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sNAme[30];
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your name :\n");
    scanf("%[^'\n']s",sNAme);    // enter remain in input buffer   

    printf("Enter your age :\n");
    scanf(" %d",&iAge);     // spece added 

    printf("Enter your marks: \n");
    scanf("%f",&fMarks);

    printf("Welcome %s \n",sNAme);
    printf("Your age is : %d\n", iAge);
    printf("Your marks : %f", fMarks);

    return EXIT_SUCCESS;
}