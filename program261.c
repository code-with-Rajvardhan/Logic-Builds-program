#include<stdio.h>
#include<stdlib.h>

void countFrequencyX(char *str)
{
    int icountSmall = 0;
    int icountCapital = 0;
    int icountDigit = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            icountSmall++;
            
        }
       else if(*str >= 'A' && *str <= 'Z')
        {
            icountCapital++;
          
        }
        else // issue 
        {
            icountDigit++;
        }

        str++;

        printf("no of small letter : %d\n",icountSmall);
        printf("no of captital letter : %d\n",icountCapital);
        printf("no of digits letter : %d\n",icountDigit);
    }

}

int main()
{
    char Arr[100] = {'\0'};
    

    printf("enter string : \n");
    scanf("%[^'\n']s",Arr);


    countFrequencyX(Arr);

    printf(" frequency of special char : %d\n");

    return EXIT_SUCCESS;
}