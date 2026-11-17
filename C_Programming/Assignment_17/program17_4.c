#include<stdio.h>
#include<stdlib.h>

void Pattern(int irow, int icol)
{
    int i = 0, j = 0;
    int icnt = 0;
    

    for(i = 1; i <= irow; i++)
    {
        
        for(j = 1, icnt=1; j <= icol; j++)
         {
            

            if(i % 2 == 0)
            {
                printf("%d\t",-icnt);
                icnt++;
            }
            else
            {
                printf("%d\t",icnt);
                icnt++;

            }
         } 
         printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter numbers of Rows and Columns :\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}