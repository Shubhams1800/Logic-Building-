#include<stdio.h>
#include<stdbool.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d is a Factor\n",iCnt);
        }

        
    }
}

int main()  
{   
   int iValue = 0;

   printf("Enter The NUmber\n");
   scanf("%d",&iValue);


    DisplayFactors(iValue);


    return 0;
}