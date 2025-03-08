#include<stdio.h>
#include<stdbool.h>

int sumFactors(int iNo)
{
    int iCnt = 0;
    int isum = 0;

    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d is a Factor\n",iCnt);

            isum = isum + iCnt;
        }

        
    }

    return isum;
}

int main()  
{   
   int iValue = 0;

   int iret = 0;

   printf("Enter The NUmber\n");
   scanf("%d",&iValue);


   iret = sumFactors(iValue);

   printf("Sum of factors are : %d \n", iret);


    return 0;
}