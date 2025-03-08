#include<stdio.h>

float CalculatePercentage(int iMarks, int iTotal)
{
    auto float fpercentage = 0.0f;

    fpercentage = (((float)iMarks / (float)iTotal)*100);        //ithe iMarks and iTotal he int ahe but apan te float asa consider karu sahkto due to "typecasting"

    return fpercentage;

}

int main()
{
    auto int ivalue1 = 0;
    auto int ivlaue2 = 0;
    auto float fRet = 0.0f;

    printf("Enter the Marks: \n");
    scanf("%d" ,&ivalue1);

    printf("Enter the total MArks: \n");
    scanf("%d", &ivlaue2);

    fRet = CalculatePercentage(ivalue1, ivlaue2);

    printf("Your percentage is: %f\n", fRet);


    return 0;
}