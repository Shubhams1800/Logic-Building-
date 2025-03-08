#include<stdio.h>
#include<stdbool.h>

bool CheckPerfectNumber(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    
        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }

}

int main()  
{   
   int iValue = 0;
   bool iRet = false;

   printf("Enter The NUmber\n");
   scanf("%d",&iValue);


    iRet = CheckPerfectNumber(iValue);

    if(iRet == true)
    {
        printf("%d is Perfect Number",iValue);
    }
    else
    {
         printf("%d is Not Perfect Number",iValue);
    }


    return 0;
}