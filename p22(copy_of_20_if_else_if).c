#include<stdio.h>

void DisplayExamTime(int iStandard)
{

    if(iStandard == 1)
    {
        printf("Your exam is at 8AM...\n");
    }

    else if(iStandard == 2)
    {
        printf("Your exam is at 9AM...\n");
    }

    else if(iStandard == 3)
    {
        printf("Your exam is at 10AM...\n");
    }

    else if(iStandard == 4)
    {
        printf("Your exam is at 11AM...\n");
    }

    else if(iStandard == 5)
    {
        printf("Your exam is at 12AM...\n");
    }

    else
    {
        printf("INvalid Input...\n");
    }
}
int main()
{
    auto int iValue = 0;

    printf("Enter your Standerd: \n");
    scanf("%d", &iValue);

    DisplayExamTime(iValue);

    return 0;
}